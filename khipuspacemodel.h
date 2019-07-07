#ifndef KHIPUSPACEMODEL_H
#define KHIPUSPACEMODEL_H

#include <khipuspace.h>

#include <QAbstractListModel>
#include <QList>
#include <QVariant>

class KhipuSpaceModel : public QAbstractListModel
{
    Q_OBJECT
public:

    enum KhipuSpaceRoles {
        TypeRole = Qt::UserRole + 1,
        NameRole,
        ElementsRole,
        IndexRole
    };

    KhipuSpaceModel(QObject *parent = nullptr);
    void addSpace (KhipuSpace *space);

private:
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

#endif // KHIPUSPACEMODEL_H
