/********************************************************************************
** Form generated from reading UI file 'receiveframe.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEFRAME_H
#define UI_RECEIVEFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReceiveFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_addressEdit;
    QToolButton *m_copyButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *ReceiveFrame)
    {
        if (ReceiveFrame->objectName().isEmpty())
            ReceiveFrame->setObjectName(QStringLiteral("ReceiveFrame"));
        ReceiveFrame->resize(846, 592);
        ReceiveFrame->setFrameShape(QFrame::StyledPanel);
        ReceiveFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(ReceiveFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ReceiveFrame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_addressEdit = new QLineEdit(ReceiveFrame);
        m_addressEdit->setObjectName(QStringLiteral("m_addressEdit"));
        m_addressEdit->setReadOnly(true);

        horizontalLayout->addWidget(m_addressEdit);

        m_copyButton = new QToolButton(ReceiveFrame);
        m_copyButton->setObjectName(QStringLiteral("m_copyButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/copy"), QSize(), QIcon::Normal, QIcon::Off);
        m_copyButton->setIcon(icon);

        horizontalLayout->addWidget(m_copyButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ReceiveFrame);
        QObject::connect(m_copyButton, SIGNAL(clicked()), ReceiveFrame, SLOT(copyAddress()));

        QMetaObject::connectSlotsByName(ReceiveFrame);
    } // setupUi

    void retranslateUi(QFrame *ReceiveFrame)
    {
        ReceiveFrame->setWindowTitle(QApplication::translate("ReceiveFrame", "Frame", 0));
        label->setText(QApplication::translate("ReceiveFrame", "Address:", 0));
        m_copyButton->setText(QApplication::translate("ReceiveFrame", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class ReceiveFrame: public Ui_ReceiveFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEFRAME_H
