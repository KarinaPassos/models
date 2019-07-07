#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickView>
#include "khipuspace.h"
#include "khipuspacemodel.h"
#include <qqmlengine.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QList<QObject*> spaceList;
    spaceList.append(new KhipuSpace("espaço 1", TypeSpaces::Space2D, 0));

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("myModel", QVariant::fromValue(spaceList));

    view.setSource(QUrl("qrc:view.qml"));
    view.show();

    return app.exec();
}
