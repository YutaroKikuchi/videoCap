

#include <opencv2/core/core.hpp>        // coreモジュールのヘッダーをインクルード
#include <opencv2/highgui/highgui.hpp>  // highguiモジュールのヘッダーをインクルード
#include <iostream>
#include<fstream>
#include<string>


#define PIC 50-1
#define MOV "passage7_1980_f30.MP4"
#define NAME "passage7_1980_f30_"
#define FORM ".jpg"
#define PASS "./passage7_1980_f30/"
#define START 151

#define FROM 2811
#define TO 3225
#define ALL 3225


/*
int main(int argc, const char* argv[]){

	int hoge;


	std::string pass = PASS;
	std::string name = NAME;
	std::string form = FORM;
	


	//cv::namedWindow("video",CV_WINDOW_AUTOSIZE);

	cv::VideoCapture cap;

	cap.open(MOV);

	if(!cap.isOpened()){
		std::cout << "ERROR" << std::endl;
		std::cin >> hoge;
		return -1;
	}

	unsigned int framecounter =0;
	unsigned int imgnum = 0;

	while(1){
		cv::Mat img;

		cap >> img;

		if(img.empty() || imgnum >PIC ||framecounter>TO){
			break;
		}


		framecounter++;

		if((framecounter % ((TO-FROM)/PIC) == 0) && (framecounter<=TO) && (framecounter>=FROM)){

			//cv::imshow("video",img);
			std::stringstream str;
			str << (imgnum++)+START;

			if(cv::imwrite(pass + name +str.str()+form,img)){
				std::cout << name+str.str()+form+" ....success" << std::endl;
			}else{
				std::cout << name+str.str()+form+" ....failed" << std::endl;
			}

		}
	}

	std::cout << "(TO-FROM)/PIC = " << (TO-FROM)/PIC << std::endl;
	std::cin >> hoge;
}
*/