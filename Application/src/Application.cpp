#include <QPushButton>
#include "Application.hpp"

namespace maestrolink {
    Application::Application(int argc, char *argv[]) : m_Application(argc, argv){
        QPushButton button("Hello world!", nullptr);
        button.resize(200, 100);
        button.show();
        QApplication::exec();
    }

    Application::~Application() {
        QApplication::closeAllWindows();
    }
} // maestrolink