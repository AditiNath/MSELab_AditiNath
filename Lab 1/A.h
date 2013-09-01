#import <Foundation/Foundation.h>

@interface print:NSObject
{
char buffer[100];
}

-addString:(const char*)astring;
-print;

@end 