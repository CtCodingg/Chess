#include <GL/glut.h>

const int boardSize = 8;
const float squareSize = 1.0f;

void drawSquare(float x, float y, bool isBlack) {
    if (isBlack) {
        glColor3f(0.0f, 0.0f, 0.0f);
    } else {
        glColor3f(1.0f, 1.0f, 1.0f);
    }

    glBegin(GL_QUADS);
    glVertex2f(x, y);
    glVertex2f(x + squareSize, y);
    glVertex2f(x + squareSize, y + squareSize);
    glVertex2f(x, y + squareSize);
    glEnd();
}

void drawBoard() {
    bool isBlack;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            isBlack = (i + j) % 2 == 0;
            drawSquare(i * squareSize, j * squareSize, isBlack);
        }
    }
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, boardSize * squareSize, 0.0, boardSize * squareSize);
    glMatrixMode(GL_MODELVIEW);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);  

    drawBoard(); 

    glFlush(); 
    glutSwapBuffers();  
}

// Initialize OpenGL
void initOpenGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Chessboard");

    initOpenGL();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop(); 

    return 0;
}