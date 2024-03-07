#include "Include.h"
#include "Process.h"
#include "MainUI.h"

#define CVUI_IMPLEMENTATION
#include "cvui.h"


void MainUI::Mainmenu() {
	// 메인화면 페이지 : while(1)문으로 인해 잠깐 프로세스가 중단 됩니다. 보기 싫으면 Main.cpp 에서 해당 함수를 제거하면 됩니다.
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
	// 데이터 한눈에 보기 : 현재는 한글 표현 불가로 인해 테스트용이며 영어로는 기능합니다.
	cv::Mat datawindow = cv::Mat(400, 500, CV_8UC3);
	cvui::init("Moble Delivery");
	while (1) {

		cvui::text(datawindow, 60, 70, input.strdo, 0.7, 0xffffff);
		cvui::text(datawindow, 60, 110, input.strsi, 0.7, 0xffffff);
		cvui::text(datawindow, 60, 150, input.strroad, 0.7, 0xffffff);
		cvui::text(datawindow, 60, 190, input.strnum, 0.7, 0xffffff);
	}
}

void MainUI::MainProcess() {
	cv::Mat Mainframe = cv::Mat(600, 1000, CV_8UC3);
	cvui::init("Moble Delivery");
	cvui::imshow("Moble Delivery", Mainframe);

	while (1) {
		if (waitKey(20) == 27 || cvui::button(Mainframe, 300, 200, "Box Size")) {
			break;
		}
		else if (cvui::button(Mainframe, 300, 300, "Box QR code")) {
			break;
		}
		else if (cvui::button(Mainframe, 300, 400, "Data View")) {
			break;
		}
		else if (cvui::button(Mainframe, 300, 500, "Quit")) {
			break;
		}
	}

}

