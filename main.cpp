#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <header/headerfile.h>
#include <QQuickView>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    baseClass b;

    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("classXY", &b);
    QQuickView *view = new QQuickView(&engine, 0);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    view->setSource(url);
    view->show();
    return app.exec();
}
