

######## A simple cmakelists.txt file for OpenCV() #############  
cmake_minimum_required(VERSION 2.8)                       
PROJECT(imageprocessing)                                     

FIND_PACKAGE( OpenCV REQUIRED )                   
INCLUDE_DIRECTORIES( ${OpenCV_INCLUDE_DIRS} )

ADD_EXECUTABLE(imageprocessing ImageProcessingApp.cpp)                     
TARGET_LINK_LIBRARIES (imageprocessing ${OpenCV_LIBS})        
########### end ####################################  
