/********************************************************************************
** Form generated from reading UI file 'sendframe.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFRAME_H
#define UI_SENDFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendFrame
{
public:
    QVBoxLayout *m_send_frame_main_layout;
    QScrollArea *m_transfersScrollarea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *m_send_frame_layout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLineEdit *m_mixinEdit;
    QLineEdit *m_paymentIdEdit;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QSlider *m_mixinSlider;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_sendButton;
    QPushButton *m_clearAllButton;
    QPushButton *m_addRecipientButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLabel *m_balanceLabel;
    QLabel *m_tickerLabel;

    void setupUi(QFrame *SendFrame)
    {
        if (SendFrame->objectName().isEmpty())
            SendFrame->setObjectName(QStringLiteral("SendFrame"));
        SendFrame->resize(866, 590);
        SendFrame->setFrameShape(QFrame::StyledPanel);
        SendFrame->setFrameShadow(QFrame::Raised);
        m_send_frame_main_layout = new QVBoxLayout(SendFrame);
        m_send_frame_main_layout->setObjectName(QStringLiteral("m_send_frame_main_layout"));
        m_transfersScrollarea = new QScrollArea(SendFrame);
        m_transfersScrollarea->setObjectName(QStringLiteral("m_transfersScrollarea"));
        m_transfersScrollarea->setFrameShape(QFrame::NoFrame);
        m_transfersScrollarea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 840, 446));
        m_send_frame_layout = new QVBoxLayout(scrollAreaWidgetContents);
        m_send_frame_layout->setObjectName(QStringLiteral("m_send_frame_layout"));
        m_send_frame_layout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 445, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_send_frame_layout->addItem(verticalSpacer);

        m_transfersScrollarea->setWidget(scrollAreaWidgetContents);

        m_send_frame_main_layout->addWidget(m_transfersScrollarea);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 5, -1, -1);
        m_mixinEdit = new QLineEdit(SendFrame);
        m_mixinEdit->setObjectName(QStringLiteral("m_mixinEdit"));
        m_mixinEdit->setMaximumSize(QSize(30, 16777215));
        m_mixinEdit->setText(QStringLiteral(""));
        m_mixinEdit->setMaxLength(5);
        m_mixinEdit->setAlignment(Qt::AlignCenter);
        m_mixinEdit->setReadOnly(true);

        gridLayout->addWidget(m_mixinEdit, 1, 2, 1, 1);

        m_paymentIdEdit = new QLineEdit(SendFrame);
        m_paymentIdEdit->setObjectName(QStringLiteral("m_paymentIdEdit"));

        gridLayout->addWidget(m_paymentIdEdit, 0, 1, 1, 3);

        label_2 = new QLabel(SendFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        label_6 = new QLabel(SendFrame);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        m_mixinSlider = new QSlider(SendFrame);
        m_mixinSlider->setObjectName(QStringLiteral("m_mixinSlider"));
        m_mixinSlider->setMaximumSize(QSize(200, 16777215));
        m_mixinSlider->setMaximum(10);
        m_mixinSlider->setPageStep(1);
        m_mixinSlider->setValue(1);
        m_mixinSlider->setTracking(false);
        m_mixinSlider->setOrientation(Qt::Horizontal);
        m_mixinSlider->setTickPosition(QSlider::TicksBothSides);
        m_mixinSlider->setTickInterval(1);

        gridLayout->addWidget(m_mixinSlider, 1, 1, 1, 1);


        m_send_frame_main_layout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_sendButton = new QPushButton(SendFrame);
        m_sendButton->setObjectName(QStringLiteral("m_sendButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        m_sendButton->setIcon(icon);

        horizontalLayout->addWidget(m_sendButton);

        m_clearAllButton = new QPushButton(SendFrame);
        m_clearAllButton->setObjectName(QStringLiteral("m_clearAllButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        m_clearAllButton->setIcon(icon1);

        horizontalLayout->addWidget(m_clearAllButton);

        m_addRecipientButton = new QPushButton(SendFrame);
        m_addRecipientButton->setObjectName(QStringLiteral("m_addRecipientButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        m_addRecipientButton->setIcon(icon2);

        horizontalLayout->addWidget(m_addRecipientButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_4 = new QLabel(SendFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        m_balanceLabel = new QLabel(SendFrame);
        m_balanceLabel->setObjectName(QStringLiteral("m_balanceLabel"));
        m_balanceLabel->setText(QStringLiteral("0.00 "));

        horizontalLayout->addWidget(m_balanceLabel);

        m_tickerLabel = new QLabel(SendFrame);
        m_tickerLabel->setObjectName(QStringLiteral("m_tickerLabel"));
        m_tickerLabel->setText(QStringLiteral(""));

        horizontalLayout->addWidget(m_tickerLabel);


        m_send_frame_main_layout->addLayout(horizontalLayout);

        QWidget::setTabOrder(m_paymentIdEdit, m_mixinSlider);
        QWidget::setTabOrder(m_mixinSlider, m_sendButton);
        QWidget::setTabOrder(m_sendButton, m_clearAllButton);
        QWidget::setTabOrder(m_clearAllButton, m_addRecipientButton);
        QWidget::setTabOrder(m_addRecipientButton, m_transfersScrollarea);
        QWidget::setTabOrder(m_transfersScrollarea, m_mixinEdit);

        retranslateUi(SendFrame);
        QObject::connect(m_addRecipientButton, SIGNAL(clicked()), SendFrame, SLOT(addRecipientClicked()));
        QObject::connect(m_clearAllButton, SIGNAL(clicked()), SendFrame, SLOT(clearAllClicked()));
        QObject::connect(m_sendButton, SIGNAL(clicked()), SendFrame, SLOT(sendClicked()));
        QObject::connect(m_mixinSlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));

        QMetaObject::connectSlotsByName(SendFrame);
    } // setupUi

    void retranslateUi(QFrame *SendFrame)
    {
        SendFrame->setWindowTitle(QApplication::translate("SendFrame", "Frame", 0));
        label_2->setText(QApplication::translate("SendFrame", "Anonimity level:", 0));
        label_6->setText(QApplication::translate("SendFrame", "PaymentID:", 0));
        m_sendButton->setText(QApplication::translate("SendFrame", "Send", 0));
        m_clearAllButton->setText(QApplication::translate("SendFrame", "Clear All", 0));
        m_addRecipientButton->setText(QApplication::translate("SendFrame", "Add Recipient", 0));
        label_4->setText(QApplication::translate("SendFrame", "Balance:", 0));
    } // retranslateUi

};

namespace Ui {
    class SendFrame: public Ui_SendFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFRAME_H
