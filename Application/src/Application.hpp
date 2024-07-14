#ifndef MAESTROLINK_APPLICATION_HPP
#define MAESTROLINK_APPLICATION_HPP

#include <QApplication>

namespace maestrolink {

    class Application {
    public:
        Application(int argc, char *argv[]);
        ~Application();

    private:
        QApplication m_Application;
    };

} // maestrolink

#endif //MAESTROLINK_APPLICATION_HPP
