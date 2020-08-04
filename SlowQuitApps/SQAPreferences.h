@import Foundation;

@interface SQAPreferences : NSObject

+ (NSInteger)delay;
+ (NSArray<NSString *> *)whitelist;
+ (NSArray<NSString *> *)appsToHide;
+ (BOOL)invertList;
+ (BOOL)displayOverlay;
+ (BOOL)disableAutostart;

@end
