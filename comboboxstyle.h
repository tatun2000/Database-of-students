#ifndef COMBOBOXSTYLE_H
#define COMBOBOXSTYLE_H

#include <QProxyStyle>
#include <QComboBox>

class ComboBoxStyle : public QProxyStyle
{
    Q_OBJECT
    Q_PROPERTY(QString placeHolder READ placeHolder WRITE setPlaceHolder)

public:
    ComboBoxStyle(const QString& placeHolder);
    virtual void drawControl(ControlElement element,
                             const QStyleOption* option,
                             QPainter* painter, const QWidget* widget) const;
    virtual void drawItemText(QPainter *painter,
                              const QRect &rect,
                              int flags,
                              const QPalette &pal,
                              bool enabled,
                              const QString &text,
                              QPalette::ColorRole textRole) const;
    QString placeHolder() const;
    void setPlaceHolder(const QString& text);

private:
    QString m_placeHolder;
};

#endif // COMBOBOXSTYLE_H
