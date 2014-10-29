#ifndef UTILITIES_H
#define UTILITIES_H

#include <QString>
#include <QHash>
#include <QPixmap>
#include <QDir>

class Utilities
{
public:
    static QString getSizeString(unsigned long long bytes);
    static bool verifySyncedFolderLimits(QString path);

private:
    Utilities() {}
    static QHash<QString, QString> extensionIcons;
    static QHash<QString, QString> languageNames;
    static void initializeExtensions();
    static void countFilesAndFolders(QString path, long *numFiles, long *numFolders, long fileLimit, long folderLimit);
    static QString getExtensionPixmap(QString fileName, QString prefix);

//Platform dependent functions
public:
    static QString languageCodeToString(QString code);
    static QString getExtensionPixmapSmall(QString fileName);
    static QString getExtensionPixmapMedium(QString fileName);
    static bool removeRecursively(QString path);
    static void copyRecursively(QString srcPath, QString dstPath);
    static void getFolderSize(QString folderPath, long long *size);
};

#endif // UTILITIES_H
