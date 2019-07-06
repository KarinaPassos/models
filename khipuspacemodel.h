#ifndef KHIPUSPACEMODEL_H
#define KHIPUSPACEMODEL_H

#include <khipuspace.h>

#include <QAbstractListModel>
#include <QList>
#include <QVariant>

/** Percaba que criei o KhipuSpaceModel do mesmo jeito que o AnimalModel
 *
 * Criei um enum com essas tal de Roles
 * Onde cada Role é um atributo do KhipuSpace
 *
 * Veja que no exemplo do AnimalModel, Type e Size são atributos de
 * Animal.*/
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

    QList<KhipuSpace> khipuList;

    KhipuSpaceModel(QObject *parent = nullptr);
    void addSpace (KhipuSpace space);

private:
    QList<KhipuSpace> m_list;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

#endif // KHIPUSPACEMODEL_H
