#pragma once

#include <fstream>

#include "imageOutput.hpp"

namespace output
{
    class PpmOutput : public ImageOutput
    {
    public:
        virtual bool open(std::string filename, int width, int height);
        virtual void write(int r, int g, int b) ;
        virtual void close();
        virtual ~PpmOutput();

    private:
        std::ofstream outfile;
        long counter = 0;
        int width;
    };
}
