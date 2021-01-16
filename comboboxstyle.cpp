#include "comboboxstyle.h"

ComboBoxStyle::ComboBoxStyle(const QString &placeHolder)
{
    setPlaceHolder(placeHolder);
}

void ComboBoxStyle::drawControl(QStyle::ControlElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget) const
{
        QStyleOption* opt = const_cast<QStyleOption*>(option);

        if (element == QStyle::CE_ComboBoxLabel)
        {
            QWidget* w = const_cast<QWidget*>(widget);
            QComboBox* cbx = qobject_cast<QComboBox*>(w);
            QStyleOptionComboBox* cb =
                            qstyleoption_cast<QStyleOptionComboBox*>(opt);
            if (cb && cbx)
            {

                if (-1 == cbx->currentIndex())
                {
                    QPalette pal = cb->palette;
                    pal.setBrush(QPalette::Text, pal.mid());
                    cb->currentText = placeHolder();
                    cb->palette = pal;
                }
            }
        }
        QProxyStyle::drawControl(element, opt, painter, widget);
    }

void ComboBoxStyle::drawItemText(QPainter *painter, const QRect &rect, int flags, const QPalette &pal, bool enabled, const QString &text, QPalette::ColorRole textRole) const
{
    if (placeHolder() == text)
    {
        textRole = QPalette::Text;
    }
    QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}

QString ComboBoxStyle::placeHolder() const
{
    return m_placeHolder;
}

void ComboBoxStyle::setPlaceHolder(const QString &text)
{
    m_placeHolder = text;
}
