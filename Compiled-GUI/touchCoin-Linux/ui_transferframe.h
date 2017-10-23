/********************************************************************************
** Form generated from reading UI file 'transferframe.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERFRAME_H
#define UI_TRANSFERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_TransferFrame
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QToolButton *m_addressBookButton;
    QToolButton *m_pasteButton;
    QLineEdit *m_labelEdit;
    QLabel *label_3;
    QToolButton *m_removeButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *m_amountSpin;
    QLineEdit *m_addressEdit;

    void setupUi(QFrame *TransferFrame)
    {
        if (TransferFrame->objectName().isEmpty())
            TransferFrame->setObjectName(QStringLiteral("TransferFrame"));
        TransferFrame->resize(885, 121);
        TransferFrame->setFrameShape(QFrame::Box);
        TransferFrame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(TransferFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(TransferFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_addressBookButton = new QToolButton(TransferFrame);
        m_addressBookButton->setObjectName(QStringLiteral("m_addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        m_addressBookButton->setIcon(icon);

        gridLayout->addWidget(m_addressBookButton, 0, 3, 1, 1);

        m_pasteButton = new QToolButton(TransferFrame);
        m_pasteButton->setObjectName(QStringLiteral("m_pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/paste"), QSize(), QIcon::Normal, QIcon::Off);
        m_pasteButton->setIcon(icon1);

        gridLayout->addWidget(m_pasteButton, 0, 4, 1, 1);

        m_labelEdit = new QLineEdit(TransferFrame);
        m_labelEdit->setObjectName(QStringLiteral("m_labelEdit"));

        gridLayout->addWidget(m_labelEdit, 1, 1, 1, 5);

        label_3 = new QLabel(TransferFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        m_removeButton = new QToolButton(TransferFrame);
        m_removeButton->setObjectName(QStringLiteral("m_removeButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeButton->setIcon(icon2);

        gridLayout->addWidget(m_removeButton, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(558, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 4);

        label_2 = new QLabel(TransferFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_amountSpin = new QDoubleSpinBox(TransferFrame);
        m_amountSpin->setObjectName(QStringLiteral("m_amountSpin"));
        m_amountSpin->setLayoutDirection(Qt::LeftToRight);
        m_amountSpin->setSuffix(QStringLiteral(""));
        m_amountSpin->setDecimals(8);
        m_amountSpin->setMaximum(1e+09);

        gridLayout->addWidget(m_amountSpin, 2, 1, 1, 1);

        m_addressEdit = new QLineEdit(TransferFrame);
        m_addressEdit->setObjectName(QStringLiteral("m_addressEdit"));

        gridLayout->addWidget(m_addressEdit, 0, 1, 1, 2);

        QWidget::setTabOrder(m_addressEdit, m_labelEdit);
        QWidget::setTabOrder(m_labelEdit, m_amountSpin);
        QWidget::setTabOrder(m_amountSpin, m_addressBookButton);
        QWidget::setTabOrder(m_addressBookButton, m_pasteButton);
        QWidget::setTabOrder(m_pasteButton, m_removeButton);

        retranslateUi(TransferFrame);
        QObject::connect(m_removeButton, SIGNAL(clicked()), TransferFrame, SLOT(close()));
        QObject::connect(m_addressBookButton, SIGNAL(clicked()), TransferFrame, SLOT(addressBookClicked()));
        QObject::connect(m_pasteButton, SIGNAL(clicked()), TransferFrame, SLOT(pasteClicked()));

        QMetaObject::connectSlotsByName(TransferFrame);
    } // setupUi

    void retranslateUi(QFrame *TransferFrame)
    {
        TransferFrame->setWindowTitle(QApplication::translate("TransferFrame", "Frame", 0));
        label->setText(QApplication::translate("TransferFrame", "Pay To:", 0));
        m_addressBookButton->setText(QApplication::translate("TransferFrame", "...", 0));
        m_pasteButton->setText(QApplication::translate("TransferFrame", "...", 0));
        m_labelEdit->setPlaceholderText(QApplication::translate("TransferFrame", "Enter a label for this address to add it to your address book", 0));
        label_3->setText(QApplication::translate("TransferFrame", "Amount:", 0));
        m_removeButton->setText(QApplication::translate("TransferFrame", "...", 0));
        label_2->setText(QApplication::translate("TransferFrame", "Label:", 0));
    } // retranslateUi

};

namespace Ui {
    class TransferFrame: public Ui_TransferFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERFRAME_H
