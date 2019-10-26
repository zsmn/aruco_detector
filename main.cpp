#include<bits/stdc++.h>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include<opencv2/aruco.hpp>

using namespace std;
using namespace cv;

int main(){

    Ptr<aruco::Dictionary> dictionary = aruco::getPredefinedDictionary(aruco::DICT_6X6_250);
    vector<int> markId;
    vector<vector<Point2f> > markCorner;

    Mat frame_at = imread("test.png");

    aruco::detectMarkers(frame_at, dictionary, markCorner, markId);
    if(markId.size() > 0){
        aruco::drawDetectedMarkers(frame_at, markCorner, markId);
        imshow("Aruco Tracker", frame_at);
        waitKey();
    }else{
        cout << "Couldn't track an aruco mark" << endl;
    }

    return 0;
}