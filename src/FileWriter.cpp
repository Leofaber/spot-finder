#include "FileWriter.h"

FileWriter::FileWriter()
{
    //ctor
}


void FileWriter::write2File(string outputFileName,string input){
    ofstream resultOfAnalysis;

    resultOfAnalysis.open(outputFileName, std::ofstream::trunc);

    if(resultOfAnalysis.is_open()){
        resultOfAnalysis << input;
        resultOfAnalysis.close();
    }else{
        printf("\nCan't open file");
    }
}
