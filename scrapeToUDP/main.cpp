//
//  main.cpp
//  scrapeToUDP
//
//  Created by Timothy Kukulski on 10/30/12.
//  Copyright (c) 2012 Adobe. All rights reserved.
//

#include <iostream>

void printUsage(const char*name);

int main(int argc, const char * argv[])
{
    if(argc == 1)
        printUsage(argv[0])
    int i = 1;
    
    while(i < argc)
        i = eatArgs(argv, i);
    
    // insert code here...
    return 0;
}

void printUsage(const char*name) {
    
    printf("usage: %s <x> <y> <width> <height> [scale] \n",argv[0]);
    
}


NSColor *MyColorAtScreenCoordinate(CGDirectDisplayID displayID, NSInteger x, NSInteger y) {
    CGImageRef image = CGDisplayCreateImageForRect(displayID, CGRectMake(x, y, 1, 1));
    NSBitmapImageRep *bitmap = [[NSBitmapImageRep alloc] initWithCGImage:image];
    CGImageRelease(image);
    NSColor *color = [bitmap colorAtX:0 y:0];
    [bitmap release];
}