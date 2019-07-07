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