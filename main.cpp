#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <header/headerfile.h>
#include <QQuickView>
#include "header/logCustom.h"
#include <fstream>
#include "stdio.h"
#include "dlt/dlt.h"
#include "dlt/dlt_user.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    baseClass b;
//    DltContext ctx;
//    DLT_LOG(ctx, DLT_LOG_INFO, DLT_CSTRING("Total frames: "));

    LOG_DEBUG<<"test "<<12345;
    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("classXY", &b);
    QQuickView *view = new QQuickView(&engine, 0);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    view->setSource(url);
    view->show();
    return app.exec();
}
