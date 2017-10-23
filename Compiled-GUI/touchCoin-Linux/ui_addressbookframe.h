/********************************************************************************
** Form generated from reading UI file 'addressbookframe.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKFRAME_H
#define UI_ADDRESSBOOKFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddressBookFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_addressBookView;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_addAddressButton;
    QPushButton *m_deleteAddressButton;
    QPushButton *m_copyAddressButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *AddressBookFrame)
    {
        if (AddressBookFrame->objectName().isEmpty())
            AddressBookFrame->setObjectName(QStringLiteral("AddressBookFrame"));
        AddressBookFrame->resize(874, 585);
        AddressBookFrame->setFrameShape(QFrame::StyledPanel);
        AddressBookFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(AddressBookFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_addressBookView = new QTreeView(AddressBookFrame);
        m_addressBookView->setObjectName(QStringLiteral("m_addressBookView"));

        verticalLayout->addWidget(m_addressBookView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_addAddressButton = new QPushButton(AddressBookFrame);
        m_addAddressButton->setObjectName(QStringLiteral("m_addAddressButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        m_addAddressButton->setIcon(icon);

        horizontalLayout->addWidget(m_addAddressButton);

        m_deleteAddressButton = new QPushButton(AddressBookFrame);
        m_deleteAddressButton->setObjectName(QStringLiteral("m_deleteAddressButton"));
        m_deleteAddressButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_deleteAddressButton->setIcon(icon1);

        horizontalLayout->addWidget(m_deleteAddressButton);

        m_copyAddressButton = new QPushButton(AddressBookFrame);
        m_copyAddressButton->setObjectName(QStringLiteral("m_copyAddressButton"));
        m_copyAddressButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/copy"), QSize(), QIcon::Normal, QIcon::Off);
        m_copyAddressButton->setIcon(icon2);

        horizontalLayout->addWidget(m_copyAddressButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookFrame);
        QObject::connect(m_addAddressButton, SIGNAL(clicked()), AddressBookFrame, SLOT(addClicked()));
        QObject::connect(m_deleteAddressButton, SIGNAL(clicked()), AddressBookFrame, SLOT(deleteClicked()));
        QObject::connect(m_copyAddressButton, SIGNAL(clicked()), AddressBookFrame, SLOT(copyClicked()));

        QMetaObject::connectSlotsByName(AddressBookFrame);
    } // setupUi

    void retranslateUi(QFrame *AddressBookFrame)
    {
        AddressBookFrame->setWindowTitle(QApplication::translate("AddressBookFrame", "Frame", 0));
        m_addAddressButton->setText(QApplication::translate("AddressBookFrame", "New address", 0));
        m_deleteAddressButton->setText(QApplication::translate("AddressBookFrame", "Delete address", 0));
        m_copyAddressButton->setText(QApplication::translate("AddressBookFrame", "Copy address", 0));
    } // retranslateUi

};

namespace Ui {
    class AddressBookFrame: public Ui_AddressBookFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKFRAME_H
