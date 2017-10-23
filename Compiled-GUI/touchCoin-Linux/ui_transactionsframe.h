/********************************************************************************
** Form generated from reading UI file 'transactionsframe.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONSFRAME_H
#define UI_TRANSACTIONSFRAME_H

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

class Ui_TransactionsFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *m_transactionsView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_csvButton;

    void setupUi(QFrame *TransactionsFrame)
    {
        if (TransactionsFrame->objectName().isEmpty())
            TransactionsFrame->setObjectName(QStringLiteral("TransactionsFrame"));
        TransactionsFrame->resize(830, 614);
        TransactionsFrame->setFrameShape(QFrame::StyledPanel);
        TransactionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(TransactionsFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_transactionsView = new QTreeView(TransactionsFrame);
        m_transactionsView->setObjectName(QStringLiteral("m_transactionsView"));
        m_transactionsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        m_transactionsView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        m_transactionsView->setAlternatingRowColors(true);
        m_transactionsView->setRootIsDecorated(false);
        m_transactionsView->setUniformRowHeights(true);
        m_transactionsView->setItemsExpandable(false);
        m_transactionsView->setSortingEnabled(false);
        m_transactionsView->header()->setCascadingSectionResizes(true);
        m_transactionsView->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(m_transactionsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_csvButton = new QPushButton(TransactionsFrame);
        m_csvButton->setObjectName(QStringLiteral("m_csvButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/export"), QSize(), QIcon::Normal, QIcon::Off);
        m_csvButton->setIcon(icon);

        horizontalLayout->addWidget(m_csvButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TransactionsFrame);
        QObject::connect(m_csvButton, SIGNAL(clicked()), TransactionsFrame, SLOT(exportToCsv()));
        QObject::connect(m_transactionsView, SIGNAL(doubleClicked(QModelIndex)), TransactionsFrame, SLOT(showTransactionDetails(QModelIndex)));

        QMetaObject::connectSlotsByName(TransactionsFrame);
    } // setupUi

    void retranslateUi(QFrame *TransactionsFrame)
    {
        TransactionsFrame->setWindowTitle(QApplication::translate("TransactionsFrame", "Frame", 0));
        m_csvButton->setText(QApplication::translate("TransactionsFrame", "Export", 0));
    } // retranslateUi

};

namespace Ui {
    class TransactionsFrame: public Ui_TransactionsFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONSFRAME_H
