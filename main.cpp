#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "khipuspace.h"
#include "khipuspacemodel.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    KhipuSpaceModel model;

    model.addSpace(KhipuSpace("espaço 1", "Space2D", 0));

    QQmlContext *context = engine.rootContext();
    context->setContextProperty("KhipuSpaceModel", &model);
    engine.load(url);

    return app.exec();
}
