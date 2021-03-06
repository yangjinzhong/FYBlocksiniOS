//
//  FYCalendarUIDefine.h
//  FYBlocksiniOS
//
//  Created by Frankenstein Yang on 4/29/16.
//  Copyright © 2016 Frankenstein Yang. All rights reserved.
//

#ifndef FYCalendarUIDefine_h
#define FYCalendarUIDefine_h

/**
 *  配置FYCalendarPriceView默认样式
 */

// FYCalendar
#define FYCalendar_BACKGROUND_COLOR ([UIColor whiteColor]) // 背景色
#define FYCalendar_CELL_INTER_SPACE (0.f) // 默认的cell水平间隔，代码创建有效
#define FYCalendar_CELL_LINE_SPACE (7.f) // 默认的cell垂直间隔，代码创建有效

// FYCalendarHeader
#define FYCalendarHeader_BACKGROUND_COLOR ([[UIColor whiteColor] colorWithAlphaComponent:.85f]) // 背景色
#define FYCalendarHeader_TOP_PADDING (10.f) // 显示年份和月份lb与顶部的距离
#define FYCalendarHeader_YEAR_MONTH_LB_HEIGHT (30.f) // 显示年份和月份lb的高度
#define kFY_CALENDAR_HEADER_YEAR_MONTH_FONT_SIZE (15.f) // 年份和月份字号
#define kFY_CALENDAR_HEADER_YEAR_MONTH_FONT_COLOR ([UIColor colorWithRed:51.0/255.0 green:51.0/255.0 blue:51.0/255.0 alpha:1]) // 年份和月份字体颜色
#define FYCalendarHeader_YEAR_MONTH_LB_BACKGROUND_COLOR  ([UIColor clearColor]) // 显示年份和月份lb的背景色
#define FYCalendarHeader_WEEK_LB_HEIGHT (30.f) // 显示星期lb的高度

#define kFY_CALENDAR_HEADER_WEEK_FONT_SIZE (12.f) // 星期字号
#define kFY_CALENDAR_HEADER_WEEK_FONT_COLOR ([UIColor colorWithRed:102.0/255.0 green:102.0/255.0 blue:102.0/255.0 alpha:1]) // 星期字体颜色
#define FYCalendarHeader_WEEK_VIEW_BACKGROUND_COLOR ([UIColor clearColor]) // 显示星期view的背景色
#define FYCalendarHeader_SYMBOL_MONDAY (@"一") // 星期一的符号
#define FYCalendarHeader_SYMBOL_TUESDAY (@"二") // 星期二的符号
#define FYCalendarHeader_SYMBOL_WEDNESDAY (@"三") // 星期三的符号
#define FYCalendarHeader_SYMBOL_THURSDAY (@"四") // 星期四的符号
#define FYCalendarHeader_SYMBOL_FRIDAY (@"五") // 星期五的符号
#define FYCalendarHeader_SYMBOL_SATURDAY (@"六") // 星期六的符号
#define FYCalendarHeader_SYMBOL_SUNDAY (@"日") // 星期日的符号

// FYCalendarCell
#define kFY_CALENDAR_CELL_PRICE_FONT_SIZE (11.f) // 价格的字号
#define kFY_CALENDAR_CELL_DAY_FONT_SIZE (15.f) // 日期的字号
#define kFY_CALENDAR_CELL_DAY_FONT_COLOR [UIColor colorWithRed:102.0/255.0 green:102.0/255.0 blue:102.0/255.0 alpha:1]
#define kFY_CALENDAR_CELL_PRICE_FONT_COLOR ([UIColor colorWithRed:135.0/255.0 green:135.0/255.0 blue:135.0/255.0 alpha:1]) // 价格的字体颜色

#define FYCalendarCell_LB_HEIGHT (16.f) // cell内lb的默认高度
#define FYCalendarCell_PADDING (5.f) // cell内部与顶部和底部的距离
#define FYCalendarCell_LB_PADDING (0.f) // lb间的间隙
#define FYCalendarCell_DARE_COLOR_ONLY_DAY ([UIColor grayColor]) //只显示日期时的字体颜色
#define FYCalendarCell_DATA_CELL_SELECT_BACKGROUND_COLOR ([[UIColor greenColor] colorWithAlphaComponent:.8f]) // 有价格数据的cell的选中背景颜色
#define FYCalendarCell_DATA_CELL_UNSELECT_BACKGROUND_COLOR ([[UIColor greenColor] colorWithAlphaComponent:.3f]) // 有价格数据的cell的未选中背景颜色
#define FYCalendarCell_EMPTY_CELL_BACKGROUND_COLOR ([UIColor whiteColor]) // 空白cell背景颜色

#endif /* FYCalendarUIDefine_h */
