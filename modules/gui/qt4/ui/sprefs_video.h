#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sprefs_video.ui'
**
** Created: Tue Feb 19 10:26:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPREFS_VIDEO_H
#define SPREFS_VIDEO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsVideo
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *enableVideo;
    QGroupBox *displayBox;
    QGridLayout *gridLayout;
    QCheckBox *fullscreen;
    QCheckBox *alwaysOnTop;
    QComboBox *outputModule;
    QLabel *voutLabel;
    QCheckBox *windowDecorations;
    QCheckBox *overlay;
    QCheckBox *hwYUVBox;
    QGroupBox *directXBox;
    QGridLayout *gridLayout1;
    QComboBox *dXdisplayDevice;
    QLabel *dxDeviceLabel;
    QGroupBox *kvaBox;
    QGridLayout *gridLayout2;
    QComboBox *kvaVideoMode;
    QLabel *kvaVideoModeLabel;
    QCheckBox *kvaFixT23;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout3;
    QLabel *deinterLabel;
    QLabel *arLabel;
    QComboBox *deinterlaceBox;
    QLabel *deinterModeLabel;
    QComboBox *deinterlaceModeBox;
    QLineEdit *arLine;
    QGroupBox *groupBox;
    QGridLayout *gridLayout4;
    QLineEdit *snapshotsDirectory;
    QPushButton *snapshotsDirectoryBrowse;
    QLabel *dirLabel;
    QLabel *prefixLabel;
    QLineEdit *snapshotsPrefix;
    QLabel *formatLabel;
    QCheckBox *snapshotsSequentialNumbering;
    QSpacerItem *horizontalSpacer;
    QComboBox *snapshotsFormat;

    void setupUi(QWidget *SPrefsVideo)
    {
        if (SPrefsVideo->objectName().isEmpty())
            SPrefsVideo->setObjectName(QString::fromUtf8("SPrefsVideo"));
        SPrefsVideo->resize(699, 615);
        vboxLayout = new QVBoxLayout(SPrefsVideo);
        vboxLayout->setSpacing(10);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        enableVideo = new QCheckBox(SPrefsVideo);
        enableVideo->setObjectName(QString::fromUtf8("enableVideo"));
        enableVideo->setChecked(true);

        vboxLayout->addWidget(enableVideo);

        displayBox = new QGroupBox(SPrefsVideo);
        displayBox->setObjectName(QString::fromUtf8("displayBox"));
        gridLayout = new QGridLayout(displayBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fullscreen = new QCheckBox(displayBox);
        fullscreen->setObjectName(QString::fromUtf8("fullscreen"));

        gridLayout->addWidget(fullscreen, 0, 0, 1, 2);

        alwaysOnTop = new QCheckBox(displayBox);
        alwaysOnTop->setObjectName(QString::fromUtf8("alwaysOnTop"));

        gridLayout->addWidget(alwaysOnTop, 2, 0, 1, 2);

        outputModule = new QComboBox(displayBox);
        outputModule->setObjectName(QString::fromUtf8("outputModule"));
        outputModule->setMaxVisibleItems(15);

        gridLayout->addWidget(outputModule, 8, 1, 1, 2);

        voutLabel = new QLabel(displayBox);
        voutLabel->setObjectName(QString::fromUtf8("voutLabel"));

        gridLayout->addWidget(voutLabel, 8, 0, 1, 1);

        windowDecorations = new QCheckBox(displayBox);
        windowDecorations->setObjectName(QString::fromUtf8("windowDecorations"));

        gridLayout->addWidget(windowDecorations, 2, 2, 1, 1);

        overlay = new QCheckBox(displayBox);
        overlay->setObjectName(QString::fromUtf8("overlay"));

        gridLayout->addWidget(overlay, 1, 0, 1, 2);

        hwYUVBox = new QCheckBox(displayBox);
        hwYUVBox->setObjectName(QString::fromUtf8("hwYUVBox"));

        gridLayout->addWidget(hwYUVBox, 1, 2, 1, 1);


        vboxLayout->addWidget(displayBox);

        directXBox = new QGroupBox(SPrefsVideo);
        directXBox->setObjectName(QString::fromUtf8("directXBox"));
        gridLayout1 = new QGridLayout(directXBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        dXdisplayDevice = new QComboBox(directXBox);
        dXdisplayDevice->setObjectName(QString::fromUtf8("dXdisplayDevice"));

        gridLayout1->addWidget(dXdisplayDevice, 0, 1, 1, 2);

        dxDeviceLabel = new QLabel(directXBox);
        dxDeviceLabel->setObjectName(QString::fromUtf8("dxDeviceLabel"));

        gridLayout1->addWidget(dxDeviceLabel, 0, 0, 1, 1);


        vboxLayout->addWidget(directXBox);

        kvaBox = new QGroupBox(SPrefsVideo);
        kvaBox->setObjectName(QString::fromUtf8("kvaBox"));
        gridLayout2 = new QGridLayout(kvaBox);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        kvaVideoMode = new QComboBox(kvaBox);
        kvaVideoMode->setObjectName(QString::fromUtf8("kvaVideoMode"));

        gridLayout2->addWidget(kvaVideoMode, 1, 1, 1, 2);

        kvaVideoModeLabel = new QLabel(kvaBox);
        kvaVideoModeLabel->setObjectName(QString::fromUtf8("kvaVideoModeLabel"));

        gridLayout2->addWidget(kvaVideoModeLabel, 1, 0, 1, 1);

        kvaFixT23 = new QCheckBox(kvaBox);
        kvaFixT23->setObjectName(QString::fromUtf8("kvaFixT23"));

        gridLayout2->addWidget(kvaFixT23, 0, 0, 1, 2);


        vboxLayout->addWidget(kvaBox);

        groupBox_2 = new QGroupBox(SPrefsVideo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout3 = new QGridLayout(groupBox_2);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        deinterLabel = new QLabel(groupBox_2);
        deinterLabel->setObjectName(QString::fromUtf8("deinterLabel"));

        gridLayout3->addWidget(deinterLabel, 0, 0, 1, 1);

        arLabel = new QLabel(groupBox_2);
        arLabel->setObjectName(QString::fromUtf8("arLabel"));

        gridLayout3->addWidget(arLabel, 1, 0, 1, 1);

        deinterlaceBox = new QComboBox(groupBox_2);
        deinterlaceBox->setObjectName(QString::fromUtf8("deinterlaceBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deinterlaceBox->sizePolicy().hasHeightForWidth());
        deinterlaceBox->setSizePolicy(sizePolicy);

        gridLayout3->addWidget(deinterlaceBox, 0, 1, 1, 1);

        deinterModeLabel = new QLabel(groupBox_2);
        deinterModeLabel->setObjectName(QString::fromUtf8("deinterModeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deinterModeLabel->sizePolicy().hasHeightForWidth());
        deinterModeLabel->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(deinterModeLabel, 0, 2, 1, 1);

        deinterlaceModeBox = new QComboBox(groupBox_2);
        deinterlaceModeBox->setObjectName(QString::fromUtf8("deinterlaceModeBox"));
        sizePolicy.setHeightForWidth(deinterlaceModeBox->sizePolicy().hasHeightForWidth());
        deinterlaceModeBox->setSizePolicy(sizePolicy);

        gridLayout3->addWidget(deinterlaceModeBox, 0, 3, 1, 1);

        arLine = new QLineEdit(groupBox_2);
        arLine->setObjectName(QString::fromUtf8("arLine"));

        gridLayout3->addWidget(arLine, 1, 1, 1, 3);


        vboxLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(SPrefsVideo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout4 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        snapshotsDirectory = new QLineEdit(groupBox);
        snapshotsDirectory->setObjectName(QString::fromUtf8("snapshotsDirectory"));

        gridLayout4->addWidget(snapshotsDirectory, 0, 2, 1, 2);

        snapshotsDirectoryBrowse = new QPushButton(groupBox);
        snapshotsDirectoryBrowse->setObjectName(QString::fromUtf8("snapshotsDirectoryBrowse"));

        gridLayout4->addWidget(snapshotsDirectoryBrowse, 0, 4, 1, 1);

        dirLabel = new QLabel(groupBox);
        dirLabel->setObjectName(QString::fromUtf8("dirLabel"));

        gridLayout4->addWidget(dirLabel, 0, 0, 1, 1);

        prefixLabel = new QLabel(groupBox);
        prefixLabel->setObjectName(QString::fromUtf8("prefixLabel"));

        gridLayout4->addWidget(prefixLabel, 1, 0, 1, 1);

        snapshotsPrefix = new QLineEdit(groupBox);
        snapshotsPrefix->setObjectName(QString::fromUtf8("snapshotsPrefix"));

        gridLayout4->addWidget(snapshotsPrefix, 1, 2, 1, 1);

        formatLabel = new QLabel(groupBox);
        formatLabel->setObjectName(QString::fromUtf8("formatLabel"));

        gridLayout4->addWidget(formatLabel, 2, 0, 1, 1);

        snapshotsSequentialNumbering = new QCheckBox(groupBox);
        snapshotsSequentialNumbering->setObjectName(QString::fromUtf8("snapshotsSequentialNumbering"));

        gridLayout4->addWidget(snapshotsSequentialNumbering, 1, 3, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout4->addItem(horizontalSpacer, 0, 1, 1, 1);

        snapshotsFormat = new QComboBox(groupBox);
        snapshotsFormat->setObjectName(QString::fromUtf8("snapshotsFormat"));

        gridLayout4->addWidget(snapshotsFormat, 2, 2, 1, 1);


        vboxLayout->addWidget(groupBox);

#ifndef QT_NO_SHORTCUT
        voutLabel->setBuddy(outputModule);
        dxDeviceLabel->setBuddy(dXdisplayDevice);
        kvaVideoModeLabel->setBuddy(kvaVideoMode);
        deinterLabel->setBuddy(deinterlaceBox);
        arLabel->setBuddy(arLine);
        deinterModeLabel->setBuddy(deinterlaceModeBox);
        dirLabel->setBuddy(snapshotsDirectory);
        prefixLabel->setBuddy(snapshotsPrefix);
        formatLabel->setBuddy(snapshotsFormat);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(enableVideo, fullscreen);
        QWidget::setTabOrder(fullscreen, overlay);
        QWidget::setTabOrder(overlay, hwYUVBox);
        QWidget::setTabOrder(hwYUVBox, alwaysOnTop);
        QWidget::setTabOrder(alwaysOnTop, windowDecorations);
        QWidget::setTabOrder(windowDecorations, outputModule);
        QWidget::setTabOrder(outputModule, dXdisplayDevice);
        QWidget::setTabOrder(dXdisplayDevice, kvaFixT23);
        QWidget::setTabOrder(kvaFixT23, kvaVideoMode);
        QWidget::setTabOrder(kvaVideoMode, deinterlaceBox);
        QWidget::setTabOrder(deinterlaceBox, deinterlaceModeBox);
        QWidget::setTabOrder(deinterlaceModeBox, arLine);
        QWidget::setTabOrder(arLine, snapshotsDirectory);
        QWidget::setTabOrder(snapshotsDirectory, snapshotsDirectoryBrowse);
        QWidget::setTabOrder(snapshotsDirectoryBrowse, snapshotsPrefix);
        QWidget::setTabOrder(snapshotsPrefix, snapshotsSequentialNumbering);
        QWidget::setTabOrder(snapshotsSequentialNumbering, snapshotsFormat);

        retranslateUi(SPrefsVideo);

        QMetaObject::connectSlotsByName(SPrefsVideo);
    } // setupUi

    void retranslateUi(QWidget *SPrefsVideo)
    {
        SPrefsVideo->setWindowTitle(Q_("Form", 0));
        enableVideo->setText(Q_("Enable video", 0));
        displayBox->setTitle(Q_("Display", 0));
        fullscreen->setText(Q_("Fullscreen", 0));
        alwaysOnTop->setText(Q_("Always on top", 0));
        voutLabel->setText(Q_("Output", 0));
        windowDecorations->setText(Q_("Window decorations", 0));
        overlay->setText(Q_("Accelerated video output (Overlay)", 0));
        hwYUVBox->setText(Q_("Use hardware YUV->RGB conversions", 0));
        directXBox->setTitle(Q_("DirectX", 0));
        dxDeviceLabel->setText(Q_("Display device", 0));
        kvaBox->setTitle(Q_("KVA", 0));
        kvaVideoModeLabel->setText(Q_("Video mode", 0));
        kvaFixT23->setText(Q_("Enable a workaround for T23", 0));
        groupBox_2->setTitle(Q_("Video", 0));
        deinterLabel->setText(Q_("Deinterlacing", 0));
        arLabel->setText(Q_("Force Aspect Ratio", 0));
        deinterModeLabel->setText(Q_("Mode", 0));
        groupBox->setTitle(Q_("Video snapshots", 0));
        snapshotsDirectoryBrowse->setText(Q_("Browse...", 0));
        dirLabel->setText(Q_("Directory", 0));
        prefixLabel->setText(Q_("Prefix", 0));
        snapshotsPrefix->setText(Q_("vlc-snap", 0));
        formatLabel->setText(Q_("Format", 0));
        snapshotsSequentialNumbering->setText(Q_("Sequential numbering", 0));
    } // retranslateUi

};

namespace Ui {
    class SPrefsVideo: public Ui_SPrefsVideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_VIDEO_H
