#include "Include.h"
#include "Process.h"
#include "MainUI.h"

#define CVUI_IMPLEMENTATION
#include "cvui.h"


//¾È³ç
void MainUI::Mainmenu() {
	cv::Mat main = cv::Mat(400, 500, CV_8UC3);

	cvui::init("Moble Delivery");

	while (1) {
		cvui::text(main, 60, 120, "Moble Delivery Service", 1, 0xffffff);
		cvui::imshow("Moble Delivery", main);

		if (waitKey(20) == 27 || cvui::button(main, 200, 200, "Start")) {
			break;
		}
		else if (cvui::button(main, 270, 200, "Quit")) {
			break;
			return;
		}
	}
}


void MainUI::Showdata(INFO input) {
	cv::Mat datawindow = cv::Mat(400, 500, CV_8UC3);
	cvui::init("Moble Delivery");
	while (1) {

		cvui::text(datawindow, 60, 70, input.strdo, 0.7, 0xffffff);
		cvui::text(datawindow, 60, 110, input.strsi, 0.7, 0xffffff);
		cvui::text(datawindow, 60, 150, input.strroad, 0.7, 0xffffff);
		cvui::text(datawindow, 60, 190, input.strnum, 0.7, 0xffffff);
	}
}

