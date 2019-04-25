#include <QApplication>
#include "calib.h"
#include "camera.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	std::vector<std::pair<int, int>> points;
	points.push_back({ 100, 100 });
	points.push_back({ 100, 100 });
	points.push_back({ 1570, 100 });
	points.push_back({ 2570, 800 });
	points.push_back({ 100, 800 });

	Callib* callibration = new Callib();
	callibration->runAnimation(points);

	Camera camera;
	camera.recordVideo();

	return a.exec();
}
