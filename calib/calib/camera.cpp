#include "camera.h"
#include <ctime>

void Camera::recordVideo() {
	VideoCapture vcap(0);
	if (!vcap.isOpened()) {
		cout << "Error opening video stream or file" << endl;
		return;
	}

	int frame_width = vcap.get(CV_CAP_PROP_FRAME_WIDTH);
	int frame_height = vcap.get(CV_CAP_PROP_FRAME_HEIGHT);
	VideoWriter video("C:/Users/Tiger20111/Videos/out.mkv", CV_FOURCC('M', 'J', 'P', 'G'), 30, Size(frame_width, frame_height), true);
	clock_t t0 = clock();

	for (;;) {

		Mat frame;
		vcap >> frame;
		video.write(frame);
		//imshow("Frame", frame);
		clock_t t1 = clock();
		if ((t1 - t0) > 20000) break;
		char c = (char)waitKey(33);
		if (c == 27) break;
	}
}
