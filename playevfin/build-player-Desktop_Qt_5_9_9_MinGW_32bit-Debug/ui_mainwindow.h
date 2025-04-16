/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *nom_player;
    QLabel *label_10;
    QLabel *label_8;
    QLineEdit *position_player;
    QLineEdit *prenom_player;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *id_player;
    QLabel *label_14;
    QLineEdit *club_player;
    QLineEdit *valeur_player;
    QLabel *label_9;
    QLineEdit *performance_player;
    QVBoxLayout *verticalLayout;
    QPushButton *add_player;
    QSpacerItem *horizontalSpacer;
    QPushButton *modify_player;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *delete_player;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pdf_player;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *stat_aymen;
    QTableView *tableView_player;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox_5;
    QPushButton *recherche_player;
    QWidget *stackedWidgetPage2;
    QLabel *factLabel;
    QMenuBar *menubar;
    QMenu *menuPlayer_Management;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1123, 728);
        MainWindow->setStyleSheet(QString::fromUtf8("/* \360\237\216\250 Style g\303\251n\303\251ral pour la fen\303\252tre principale */\n"
"QMainWindow {\n"
"    background-color: rgba(30, 30, 30, 0.8);  /* Fond noir transparent */\n"
"    color: #FFFFFF;  /* Texte en blanc */\n"
"    border: 2px solid rgba(76, 175, 80, 0.8); /* Bordure verte douce avec transparence */\n"
"}\n"
"\n"
"/* \360\237\223\214 Onglets */\n"
"QTabWidget::pane {\n"
"    border: 2px solid rgba(76, 175, 80, 0.8);  /* Bordure verte douce */\n"
"    background-color: rgba(37, 37, 37, 0.8); /* Fond plus sombre et transparent */\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: rgba(37, 37, 37, 0.8);  /* Onglet avec fond sombre transparent */\n"
"    color: #FFFFFF;\n"
"    border: 2px solid rgba(76, 175, 80, 0.8); /* Bordure verte douce */\n"
"    padding: 8px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: rgba(76, 175, 80, 0.8); /* Vert doux pour onglet s\303\251lectionn\303\251 */\n"
"    color: #1E1E1E;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/*"
                        " \360\237\224\230 Boutons */\n"
"QPushButton {\n"
"    background-color: rgba(0, 100, 0, 0.8);  /* Vert sombre transparent */\n"
"    color: #FFFFFF;\n"
"    border: 2px solid rgba(76, 175, 80, 0.8); /* Bordure verte douce */\n"
"    border-radius: 12px;\n"
"    padding: 12px 25px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    transition: all 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(76, 175, 80, 0.8); /* Vert plus lumineux */\n"
"    color: #1E1E1E;\n"
"    border: 2px solid rgba(56, 142, 60, 0.8); /* Bordure verte plus fonc\303\251e */\n"
"    transform: translateY(-4px); /* Effet de lev\303\251e */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(56, 142, 60, 0.8); /* Vert plus fonc\303\251 pour l'\303\251tat press\303\251 */\n"
"    transform: scale(0.98);  /* Effet de compression */\n"
"}\n"
"\n"
"/* \360\237\224\215 Champs de recherche & Tri */\n"
"QLineEdit, QComboBox {\n"
"    background-color: rgba(51, 51, 51, 0.8);  /* Fond sombre tr"
                        "ansparent */\n"
"    color: #FFFFFF;\n"
"    border: 2px solid rgba(76, 175, 80, 0.8); /* Bordure verte douce */\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(51, 51, 51, 0.8); /* Fond sombre transparent */\n"
"    color: #FFFFFF;\n"
"    selection-background-color: rgba(76, 175, 80, 0.8); /* Vert doux pour la s\303\251lection */\n"
"    selection-color: #1E1E1E;\n"
"}\n"
"\n"
"/* \360\237\223\212 TableView */\n"
"QTableView {\n"
"    background: linear-gradient(135deg, rgba(30, 77, 30, 0.8), rgba(0, 100, 0, 0.8));  /* Gradient vert du terrain avec transparence */\n"
"    color: #FFFFFF;\n"
"    border: 2px solid rgba(76, 175, 80, 0.8);\n"
"    gridline-color: rgba(76, 175, 80, 0.8);\n"
"    border-radius: 12px;  /* Coins arrondis */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(56, 142, 60, 0.8);  /* Vert plus fonc\303\251 "
                        "pour les ent\303\252tes */\n"
"    color: #FFFFFF;\n"
"    border: 1px solid rgba(76, 175, 80, 0.8);  /* Bordure verte douce */\n"
"    padding: 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableCornerButton::section {\n"
"    background-color: rgba(56, 142, 60, 0.8);  /* Fond sombre transparent pour le coin de la table */\n"
"    border: none;\n"
"}\n"
"\n"
"/* \360\237\223\212 Groupe des statistiques */\n"
"QGroupBox {\n"
"    background-color: rgba(51, 51, 51, 0.8);  /* Fond sombre transparent */\n"
"    border: 2px solid rgba(76, 175, 80, 0.8);\n"
"    border-radius: 8px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    color: #FFFFFF;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* \360\237\223\210 Barre de performance */\n"
"QProgressBar {\n"
"    background-color: rgba(51, 51, 51, 0.8);  /* Fond sombre transparent */\n"
"    border: 2px solid rgba(76, 175, 80, 0.8);\n"
"    color: #FFFFFF;\n"
"    font-size: 12px;\n"
"    padding: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chu"
                        "nk {\n"
"    background: rgba(76, 175, 80, 0.8);  /* Vert doux pour la barre */\n"
"}\n"
"\n"
"/* \360\237\223\234 Barre de d\303\251filement */\n"
"QScrollBar:vertical, QScrollBar:horizontal {\n"
"    background: rgba(51, 51, 51, 0.8);  /* Fond sombre transparent */\n"
"    border: 2px solid rgba(76, 175, 80, 0.8);\n"
"    width: 12px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"    background: rgba(76, 175, 80, 0.8);  /* Vert doux pour la poign\303\251e */\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover, QScrollBar::handle:horizontal:hover {\n"
"    background: rgba(56, 142, 60, 0.8);  /* Vert plus fonc\303\251 pour l'effet hover */\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 30, 841, 611));
        stackedWidget->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border: 2px solid #00FF00;\n"
"    background: #1E1E1E;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: #1E1E1E;\n"
"    color: #00FF00;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #00FF00;\n"
"    color: #000000;\n"
"    font-weight: bold;\n"
"}\n"
""));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        gridLayout_2 = new QGridLayout(stackedWidgetPage1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(5);
        nom_player = new QLineEdit(stackedWidgetPage1);
        nom_player->setObjectName(QStringLiteral("nom_player"));
        nom_player->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
""));

        gridLayout->addWidget(nom_player, 1, 1, 1, 1);

        label_10 = new QLabel(stackedWidgetPage1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("QLabel {\n"
"    color: #4CAF50;  /* Softer, more natural green */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        label_8 = new QLabel(stackedWidgetPage1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("QLabel {\n"
"    color: #4CAF50;  /* Softer, more natural green */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        position_player = new QLineEdit(stackedWidgetPage1);
        position_player->setObjectName(QStringLiteral("position_player"));
        position_player->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(position_player, 4, 1, 1, 1);

        prenom_player = new QLineEdit(stackedWidgetPage1);
        prenom_player->setObjectName(QStringLiteral("prenom_player"));
        prenom_player->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(prenom_player, 2, 1, 1, 1);

        label_11 = new QLabel(stackedWidgetPage1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("QLabel {\n"
"    color: #4CAF50;  /* Softer, more natural green */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(stackedWidgetPage1);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("QLabel {\n"
"    color: #4CAF50;  /* Softer, more natural green */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        label_13 = new QLabel(stackedWidgetPage1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("QLabel {\n"
"    color: #4CAF50;  /* Softer, more natural green */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        id_player = new QLineEdit(stackedWidgetPage1);
        id_player->setObjectName(QStringLiteral("id_player"));
        id_player->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
""));

        gridLayout->addWidget(id_player, 0, 1, 1, 1);

        label_14 = new QLabel(stackedWidgetPage1);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("QLabel {\n"
"    color: #4CAF50;  /* Softer, more natural green */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        gridLayout->addWidget(label_14, 6, 0, 1, 1);

        club_player = new QLineEdit(stackedWidgetPage1);
        club_player->setObjectName(QStringLiteral("club_player"));
        club_player->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
""));

        gridLayout->addWidget(club_player, 5, 1, 1, 1);

        valeur_player = new QLineEdit(stackedWidgetPage1);
        valeur_player->setObjectName(QStringLiteral("valeur_player"));
        valeur_player->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
""));

        gridLayout->addWidget(valeur_player, 3, 1, 1, 1);

        label_9 = new QLabel(stackedWidgetPage1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("QLabel {\n"
"    color: #4CAF50;  /* Softer, more natural green */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        performance_player = new QLineEdit(stackedWidgetPage1);
        performance_player->setObjectName(QStringLiteral("performance_player"));
        performance_player->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
""));

        gridLayout->addWidget(performance_player, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        add_player = new QPushButton(stackedWidgetPage1);
        add_player->setObjectName(QStringLiteral("add_player"));
        add_player->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #0B3D0B;                  /* Dark green (field-like) */\n"
"    color: #FFFFFF;                             /* Clean white text */\n"
"    border-radius: 15px;                        /* Smooth rounded corners */\n"
"    padding: 12px 30px;                         /* Ample padding for balance */\n"
"    font-size: 16px;                            /* Bold and readable text */\n"
"    font-weight: bold;\n"
"    border: 2px solid #32CD32;                  /* Bright green border like a pitch line */\n"
"    transition: all 0.3s ease-in-out;           /* Smooth transition for effects */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32CD32;                  /* Bright green (active, energetic) */\n"
"    color: #0B3D0B;                             /* Dark green text to match the pitch theme */\n"
"    border: 2px solid #FFFFFF;                  /* White border on hover for extra contrast */\n"
"    transform: translateY(-4px);                 /* Slight lift effec"
                        "t for a dynamic feel */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #006400;                  /* Darker green for pressed state */\n"
"    color: #FFFFFF;                             /* White text */\n"
"    border: 2px solid #32CD32;                  /* Green border for pressed state */\n"
"    transform: scale(0.98);                      /* Subtle compression effect when clicked */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;                              /* Remove focus outline */\n"
"}\n"
""));

        verticalLayout->addWidget(add_player);

        horizontalSpacer = new QSpacerItem(13, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(horizontalSpacer);

        modify_player = new QPushButton(stackedWidgetPage1);
        modify_player->setObjectName(QStringLiteral("modify_player"));
        modify_player->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #0B3D0B;                  /* Dark green (field-like) */\n"
"    color: #FFFFFF;                             /* Clean white text */\n"
"    border-radius: 15px;                        /* Smooth rounded corners */\n"
"    padding: 12px 30px;                         /* Ample padding for balance */\n"
"    font-size: 16px;                            /* Bold and readable text */\n"
"    font-weight: bold;\n"
"    border: 2px solid #32CD32;                  /* Bright green border like a pitch line */\n"
"    transition: all 0.3s ease-in-out;           /* Smooth transition for effects */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32CD32;                  /* Bright green (active, energetic) */\n"
"    color: #0B3D0B;                             /* Dark green text to match the pitch theme */\n"
"    border: 2px solid #FFFFFF;                  /* White border on hover for extra contrast */\n"
"    transform: translateY(-4px);                 /* Slight lift effec"
                        "t for a dynamic feel */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #006400;                  /* Darker green for pressed state */\n"
"    color: #FFFFFF;                             /* White text */\n"
"    border: 2px solid #32CD32;                  /* Green border for pressed state */\n"
"    transform: scale(0.98);                      /* Subtle compression effect when clicked */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;                              /* Remove focus outline */\n"
"}\n"
""));

        verticalLayout->addWidget(modify_player);

        horizontalSpacer_2 = new QSpacerItem(440, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(horizontalSpacer_2);

        delete_player = new QPushButton(stackedWidgetPage1);
        delete_player->setObjectName(QStringLiteral("delete_player"));
        delete_player->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #0B3D0B;                  /* Dark green (field-like) */\n"
"    color: #FFFFFF;                             /* Clean white text */\n"
"    border-radius: 15px;                        /* Smooth rounded corners */\n"
"    padding: 12px 30px;                         /* Ample padding for balance */\n"
"    font-size: 16px;                            /* Bold and readable text */\n"
"    font-weight: bold;\n"
"    border: 2px solid #32CD32;                  /* Bright green border like a pitch line */\n"
"    transition: all 0.3s ease-in-out;           /* Smooth transition for effects */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32CD32;                  /* Bright green (active, energetic) */\n"
"    color: #0B3D0B;                             /* Dark green text to match the pitch theme */\n"
"    border: 2px solid #FFFFFF;                  /* White border on hover for extra contrast */\n"
"    transform: translateY(-4px);                 /* Slight lift effec"
                        "t for a dynamic feel */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #006400;                  /* Darker green for pressed state */\n"
"    color: #FFFFFF;                             /* White text */\n"
"    border: 2px solid #32CD32;                  /* Green border for pressed state */\n"
"    transform: scale(0.98);                      /* Subtle compression effect when clicked */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;                              /* Remove focus outline */\n"
"}\n"
""));

        verticalLayout->addWidget(delete_player);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(horizontalSpacer_3);

        pdf_player = new QPushButton(stackedWidgetPage1);
        pdf_player->setObjectName(QStringLiteral("pdf_player"));
        pdf_player->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #0B3D0B;                  /* Dark green (field-like) */\n"
"    color: #FFFFFF;                             /* Clean white text */\n"
"    border-radius: 15px;                        /* Smooth rounded corners */\n"
"    padding: 12px 30px;                         /* Ample padding for balance */\n"
"    font-size: 16px;                            /* Bold and readable text */\n"
"    font-weight: bold;\n"
"    border: 2px solid #32CD32;                  /* Bright green border like a pitch line */\n"
"    transition: all 0.3s ease-in-out;           /* Smooth transition for effects */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32CD32;                  /* Bright green (active, energetic) */\n"
"    color: #0B3D0B;                             /* Dark green text to match the pitch theme */\n"
"    border: 2px solid #FFFFFF;                  /* White border on hover for extra contrast */\n"
"    transform: translateY(-4px);                 /* Slight lift effec"
                        "t for a dynamic feel */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #006400;                  /* Darker green for pressed state */\n"
"    color: #FFFFFF;                             /* White text */\n"
"    border: 2px solid #32CD32;                  /* Green border for pressed state */\n"
"    transform: scale(0.98);                      /* Subtle compression effect when clicked */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;                              /* Remove focus outline */\n"
"}\n"
""));

        verticalLayout->addWidget(pdf_player);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(horizontalSpacer_4);

        stat_aymen = new QPushButton(stackedWidgetPage1);
        stat_aymen->setObjectName(QStringLiteral("stat_aymen"));
        stat_aymen->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #0B3D0B;                  /* Dark green (field-like) */\n"
"    color: #FFFFFF;                             /* Clean white text */\n"
"    border-radius: 15px;                        /* Smooth rounded corners */\n"
"    padding: 12px 30px;                         /* Ample padding for balance */\n"
"    font-size: 16px;                            /* Bold and readable text */\n"
"    font-weight: bold;\n"
"    border: 2px solid #32CD32;                  /* Bright green border like a pitch line */\n"
"    transition: all 0.3s ease-in-out;           /* Smooth transition for effects */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32CD32;                  /* Bright green (active, energetic) */\n"
"    color: #0B3D0B;                             /* Dark green text to match the pitch theme */\n"
"    border: 2px solid #FFFFFF;                  /* White border on hover for extra contrast */\n"
"    transform: translateY(-4px);                 /* Slight lift effec"
                        "t for a dynamic feel */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #006400;                  /* Darker green for pressed state */\n"
"    color: #FFFFFF;                             /* White text */\n"
"    border: 2px solid #32CD32;                  /* Green border for pressed state */\n"
"    transform: scale(0.98);                      /* Subtle compression effect when clicked */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;                              /* Remove focus outline */\n"
"}\n"
""));

        verticalLayout->addWidget(stat_aymen);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);

        tableView_player = new QTableView(stackedWidgetPage1);
        tableView_player->setObjectName(QStringLiteral("tableView_player"));
        tableView_player->setMinimumSize(QSize(250, 0));
        tableView_player->setStyleSheet(QLatin1String("QTableView {\n"
"    background: qlineargradient(135deg, #1E4D1E, #006400); /* Green gradient like the football field */\n"
"    color: #000000;                                /* Black text for better contrast */\n"
"    border-radius: 12px;                           /* Rounded corners for a sleek look */\n"
"    border: 2px solid #32CD32;                     /* Bright green border like a pitch line */\n"
"    padding: 10px;                                 /* Padding for inner spacing */\n"
"    selection-background-color: #32CD32;           /* Bright green for selected rows */\n"
"    selection-color: #000000;                      /* Black text when selected */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background: qlineargradient(135deg, #32CD32, #228B22);  /* Green gradient for header */\n"
"    color: #000000;                                /* Black header text */\n"
"    padding: 8px;\n"
"    border: none;                                  /* No border for header sections */\n"
"    font-weight: bold;\n"
""
                        "}\n"
"\n"
"QTableCornerButton::section {\n"
"    background: qlineargradient(135deg, #32CD32, #006400);  /* Gradient for the corner button */\n"
"    border: none;\n"
"}\n"
""));
        tableView_player->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout_2->addWidget(tableView_player, 2, 0, 1, 2);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setSizeConstraint(QLayout::SetDefaultConstraint);

        gridLayout_2->addLayout(gridLayout_11, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lineEdit_5 = new QLineEdit(stackedWidgetPage1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(250, 0));
        lineEdit_5->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(lineEdit_5);

        comboBox_5 = new QComboBox(stackedWidgetPage1);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setMinimumSize(QSize(250, 0));
        comboBox_5->setStyleSheet(QLatin1String("QLineEdit, QComboBox {\n"
"    background-color: #0B3D0B;           /* Dark grass green */\n"
"    color: #FFFFFF;                      /* Clean white text */\n"
"    border: 2px solid #FFFFFF;           /* White like field lines */\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    selection-background-color: #32CD32; /* Bright green highlight */\n"
"    selection-color: #0B3D0B;            /* Deep green contrast */\n"
"}\n"
"\n"
"QLineEdit:focus, QComboBox:focus {\n"
"    border: 2px solid #32CD32;           /* Focused with bright green */\n"
"    background-color: #145214;           /* Slightly lighter green for active state */\n"
"    color: #FFFFFF;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(comboBox_5);

        recherche_player = new QPushButton(stackedWidgetPage1);
        recherche_player->setObjectName(QStringLiteral("recherche_player"));
        recherche_player->setMinimumSize(QSize(250, 0));
        recherche_player->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #FFFFFF;                  /* White background (fresh and clean) */\n"
"    color: #0B3D0B;                             /* Dark green text (field color) */\n"
"    border-radius: 15px;                        /* Smooth rounded corners */\n"
"    padding: 12px 30px;                         /* Ample padding for balance */\n"
"    font-size: 16px;                            /* Bold and readable text */\n"
"    font-weight: bold;\n"
"    border: 2px solid #32CD32;                  /* Bright green border like a pitch line */\n"
"    transition: all 0.3s ease-in-out;           /* Smooth transition for effects */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #32CD32;                  /* Bright green background for hover */\n"
"    color: #FFFFFF;                             /* White text when hovered */\n"
"    border: 2px solid #0B3D0B;                  /* Dark green border for hover */\n"
"    transform: translateY(-4px);                 /* Slight lift effect for"
                        " a dynamic feel */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #006400;                  /* Darker green for pressed state */\n"
"    color: #FFFFFF;                             /* White text */\n"
"    border: 2px solid #32CD32;                  /* Green border for pressed state */\n"
"    transform: scale(0.98);                      /* Subtle compression effect when clicked */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;                              /* Remove focus outline */\n"
"}\n"
""));

        horizontalLayout_5->addWidget(recherche_player);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 2);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QStringLiteral("stackedWidgetPage2"));
        stackedWidget->addWidget(stackedWidgetPage2);
        factLabel = new QLabel(centralwidget);
        factLabel->setObjectName(QStringLiteral("factLabel"));
        factLabel->setGeometry(QRect(120, 646, 441, 21));
        factLabel->setStyleSheet(QLatin1String("QLabel {\n"
"    color: #4CAF50;  /* Softer, more natural green */\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1123, 25));
        menuPlayer_Management = new QMenu(menubar);
        menuPlayer_Management->setObjectName(QStringLiteral("menuPlayer_Management"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPlayer_Management->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Valeur", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Pr\303\251nom", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Position", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Club", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Performance", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Id", Q_NULLPTR));
        add_player->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modify_player->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        delete_player->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pdf_player->setText(QApplication::translate("MainWindow", "Exporter PDF", Q_NULLPTR));
        stat_aymen->setText(QApplication::translate("MainWindow", "stats", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("MainWindow", "Rechercher un joueur", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Trier par Nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Trier parequipe", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Trier par P\303\251nalit\303\251s", Q_NULLPTR)
        );
        recherche_player->setText(QApplication::translate("MainWindow", "\360\237\224\215 Rechercher", Q_NULLPTR));
        factLabel->setText(QString());
        menuPlayer_Management->setTitle(QApplication::translate("MainWindow", "taper ici ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
