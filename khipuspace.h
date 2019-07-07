#ifndef KHIPUSPACE_H
#define KHIPUSPACE_H

#include <QString>
#include <QList>

enum class TypeSpaces {
    Space2D,
    Space3D
};

class KhipuSpace
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)

public:
    KhipuSpace();
    KhipuSpace(QString name, TypeSpaces type, unsigned int index); // Caso de uso -> KhipySpace("Circulo", Space2D, 5);

    QString name() const;
    void setName(const QString &name);

    unsigned int index() const;

    TypeSpaces type() const;

    QList<QString> elements() const;
    void addElement (QString expression);
    void removeElement(int index);


private:
    QList<QString> m_elements;
    QString m_name;
    unsigned int m_index;
    TypeSpaces m_type;
};

#endif // KHIPUSPACE_H
