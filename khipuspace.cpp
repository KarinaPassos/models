#include "khipuspace.h"

KhipuSpace::KhipuSpace()
{

}

QString KhipuSpace::name() const
{
    return m_name;
}

void KhipuSpace::setName(const QString &name)
{
    m_name = name;
}

unsigned int KhipuSpace::index() const
{
    return m_index;
}

TypeSpaces KhipuSpace::type() const
{
    return m_type;
}

QList<QString> KhipuSpace::elements() const
{
    return m_elements;
}

void KhipuSpace::addElement(QString expression)
{
    m_elements.append(expression);
}

void KhipuSpace::removeElement(int index)
{
    m_elements.removeAt(index);
}