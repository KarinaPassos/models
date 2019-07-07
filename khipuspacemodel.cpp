#include "khipuspacemodel.h"
#include "khipuspace.h"
#include <QByteArray>
#include <QHash>

KhipuSpaceModel::KhipuSpaceModel(QObject *parent) :
    QAbstractListModel(parent)
{
    QHash<int, QByteArray> roles;
    roles[TypeRole] = "type";
    roles[NameRole] = "name";
    roles[ElementsRole] = "elements";
    roles[IndexRole] = "index";
    //talvez dê ruim, pq pode confundir com o index do abastractlistmodel
    // mas segue o baile

    // Eu to basicamente dizendo qual vai ser o nome de cada propriedade no QML
}

int KhipuSpaceModel::rowCount(const QModelIndex &parent) const
{
    return 0;
}

QVariant KhipuSpaceModel::data(const QModelIndex &index, int role) const
{
    return 0;
}

void KhipuSpaceModel::addSpace(KhipuSpace *space)
{

}