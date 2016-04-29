//
//  FYCalendar.h
//  FYBlocksiniOS
//
//  Created by Frankenstein Yang on 4/28/16.
//  Copyright © 2016 Frankenstein Yang. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "FYCalendarModel.h"
#import "FYCalendarLayout.h"
#import "FYCalendarCell.h"

#define kFYCalendarCellDataKeyDay (@"kSkyCalendarPriceViewCellDataKeyDay") // 日期
#define kFYCalendarCellDataKeyPrice (@"kSkyCalendarPriceViewCellDataKeyPrice") // 价格
#define kFYCalendarCellDataKeyCount (@"kSkyCalendarPriceViewCellDataKeyCount") // 数量

@class FYCalendar;

@protocol FYCalendarDelegate <NSObject>
@optional

/**
 *  是否应该选中某项
 *
 *  @param cview
 *  @param model 应该选中项上的数据
 *
 *  @return 是否选中
 */
- (BOOL)calendar:(FYCalendar *)cview shouldSelectIndexWithPriceModel:(FYCalendarModel *)model;

/**
 *  取消选中某项
 *
 *  @param cview
 *  @param model 取消选中项上的数据
 */
- (void)calendar:(FYCalendar *)cview didUnselectIndexWithPriceModel:(FYCalendarModel *)model;

/**
 *  获取用于直接显示在cell中lb的string，dictionary的key为上面kSkyCalendarPriceViewCellDataKey
 *
 *  @param cview
 *  @param indexPath
 *  @param year      年
 *  @param month     月
 *  @param day       日
 *  @param price     价格
 *  @param count     数量
 *  @param isToady   是否为今天
 *
 *  @return 需要显示string数据，返回nil为使用默认，可以其中几个数据返回nil
 */
- (NSDictionary *)calendar:(FYCalendar *)cview cellDataStringDictionaryWithIndexPath:(NSIndexPath*)indexPath withYear:(NSString*)year withMonth:(NSString*)month withDay:(NSString*)day withPrice:(NSString*)price withCount:(NSString*)count withIsToday:(BOOL)isToady;

/**
 *  获取用于直接显示在只显示日期的cell中lb的string
 *
 *  @param cview
 *  @param year    年
 *  @param month   月
 *  @param day     日
 *  @param isToday 是否为今天
 *
 *  @return 需要显示的日期string，返回nil为使用默认
 */
- (NSString *)calendar:(FYCalendar *)cview cellDayStringWithYear:(NSString*)year withMonth:(NSString*)month withDay:(NSString*)day withIsToday:(BOOL)isToday;

/**
 *  获取用于直接显示在只显示年月的header中lb的string
 *
 *  @param cview
 *  @param year  年
 *  @param month 月
 *
 *  @return 需要显示的年月string，返回nil为使用默认
 */
- (NSString*)calendar:(FYCalendar *)cview headerLabelStringWithYear:(NSString*)year withMonth:(NSString*)month;

@end

@interface FYCalendar : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) id<FYCalendarDelegate> calendarDelegate;
@property (copy, nonatomic) NSArray *datas; // SkyCalendarPriceModel
@property (copy, nonatomic) NSDate *today; // 今天的日期，用于今天的日期内显示别的string

/**
 *  创建一个价格日历
 *
 *  @return 价格日历
 */
+ (instancetype)calendarPriceView;

+ (instancetype)calendarPriceViewWithToday:(NSDate*)today;

+ (instancetype)calendarPriceViewWithTodayOfYear:(int)year ofMonth:(int)month ofDay:(int)day;

- (void)setTodayWithYear:(int)year withMonth:(int)month withDay:(int)day;

@end

@interface NSMutableDictionary (SkyCalendarPriceViewCellData)
@property (copy, nonatomic) NSString *dayStr;
@property (copy, nonatomic) NSString *priceStr;
@property (copy, nonatomic) NSString *countStr;
@end

@implementation NSMutableDictionary (SkyCalendarPriceViewCellData)
- (void)setDayStr:(NSString *)dayStr {
    if(dayStr) {
        self[kFYCalendarCellDataKeyDay] = [dayStr copy];
    } else {
        [self removeObjectForKey:kFYCalendarCellDataKeyDay];
    }
}
-(NSString *)dayStr {
    return self[kFYCalendarCellDataKeyDay];
}

- (void)setPriceStr:(NSString *)priceStr {
    if(priceStr) {
        self[kFYCalendarCellDataKeyPrice] = [priceStr copy];
    } else {
        [self removeObjectForKey:kFYCalendarCellDataKeyPrice];
    }
}
- (NSString *)priceStr {
    return self[kFYCalendarCellDataKeyPrice];
}

- (void)setCountStr:(NSString *)countStr {
    if(countStr) {
        self[kFYCalendarCellDataKeyCount] = [countStr copy];
    } else {
        [self removeObjectForKey:kFYCalendarCellDataKeyCount];
    }
}
- (NSString *)countStr {
    return self[kFYCalendarCellDataKeyCount];
}
@end
