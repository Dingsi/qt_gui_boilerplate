#include "mainwindow.h"
#include <QWidget>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , m_clickCount(0)
{
    // Create central widget and layout
    QWidget* centralWidget = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(centralWidget);
    
    // Create and setup button
    m_button = new QPushButton("Click Me!", this);
    connect(m_button, &QPushButton::clicked, this, &MainWindow::handleButtonClick);
    
    // Create and setup label
    m_label = new QLabel("Welcome to Qt!", this);
    m_label->setAlignment(Qt::AlignCenter);
    
    // Add widgets to layout
    layout->addWidget(m_label);
    layout->addWidget(m_button);
    
    // Set central widget
    setCentralWidget(centralWidget);
    
    // Set window properties
    setWindowTitle("Sample Qt App");
    resize(400, 300);
}

MainWindow::~MainWindow() {}

void MainWindow::handleButtonClick() {
    m_clickCount++;
    m_label->setText(QString("Button clicked %1 times!").arg(m_clickCount));
}