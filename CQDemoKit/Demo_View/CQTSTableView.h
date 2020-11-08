//
//  CQTSTableView.h
//  CQDemoKit
//
//  Created by ciyouzen on 7/9/15.
//  Copyright (c) 2015 dvlproad. All rights reserved.
//
//  为了快速构建完整 Demo 工程提供的TableView

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CQTSTableView : UITableView {
    
}

/*
 *  初始化 TableView
 *
 *  @param sectionRowCounts     每个section的rowCount个数(数组有多少个就多少个section，数组里的元素值为该section的row行数)
 *
 *  @return TableView
 */
- (instancetype)initWithSectionRowCounts:(NSArray<NSNumber *> *)sectionRowCounts NS_DESIGNATED_INITIALIZER;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;

// 初始化示例 CQTSTableView *tableView = [[CQTSTableView alloc] initWithSectionRowCounts:@[@1, @3, @6, @8]];

@end

NS_ASSUME_NONNULL_END
