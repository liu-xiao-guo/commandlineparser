#include <QCoreApplication>
#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QCoreApplication::setApplicationName("Application Name");
    QCoreApplication::setApplicationVersion("Version: 1");

    QCommandLineParser parser;
    parser.setApplicationDescription("Description: This is example of console application");
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption showCalculation(QStringList() << "o" << "opt", QCoreApplication::translate("main", "Option is: fr") \
                                       ,QCoreApplication::translate("main", "opt"), "1");
    parser.addOption(showCalculation);

    parser.process(a);

    const QStringList args = parser.optionNames();
    if (args.size() < 1) {
        fprintf(stderr, "%s\n", qPrintable(QCoreApplication::translate("main", "Error: Must specify an argument.")));
        parser.showHelp(1);
    }

    QString opt1 = parser.value(showCalculation);

    qDebug() << "opt1: " << opt1;

    if (opt1 != "fr") {
        fprintf(stderr, "%s\n", qPrintable(QCoreApplication::translate("main", "Error: Invalid format argument. Must be fr")));
        parser.showHelp(1);
    }

    if (opt1 == "fr")
    {
        int a =4, b = 5, c=0;
        c = a + b;
        qDebug() << "Sum: " << c;
    }

    return 0;
}
