#include "Include.h"
#include "Process.h"
#include "MainUI.h"

#define CVUI_IMPLEMENTATION
#include "cvui.h"


void MainUI::Mainmenu() {
	// ����ȭ�� ������ : while(1)������ ���� ��� ���μ����� �ߴ� �˴ϴ�. ���� ������ Main.cpp ���� �ش� �Լ��� �����ϸ� �˴ϴ�.
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
	// ������ �Ѵ��� ���� : ����� �ѱ� ǥ�� �Ұ��� ���� �׽�Ʈ���̸� ����δ� ����մϴ�.
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

