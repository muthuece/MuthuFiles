#include "Instances.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[]) {
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  const QUrl url(QStringLiteral("qrc:/main.qml"));

  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated, &app,
                   [url](QObject *obj, const QUrl &objUrl) {
                     if (!obj && url == objUrl)
                       QCoreApplication::exit(-1);
                   },
                   Qt::QueuedConnection);
  engine.load(url);

  //  std::multimap<int, int> temp;
  //  temp.insert(std::pair<int, int>(1, 5));
  //  temp.insert(std::pair<int, int>(1, 5));
  //  temp.insert(std::pair<int, int>(1, 5));

  //  temp.insert(std::pair<int, int>(2, 10));
  //  temp.insert(std::pair<int, int>(3, 15));

  //  qDebug() << temp.size();
  //  temp.erase(temp.begin());
  //  qDebug() << temp.size();

  Instances instObj;

  return app.exec();
}
