//
//  DLZWaterFallLayout.h
//  DLZCollectionViewLayout
//
//  Created by 董力祯 on 2017/12/8.
//  Copyright © 2017年 董力祯. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DLZWaterFallLayout;

@protocol DLZWaterFallLayoutDelegate <NSObject>

@required
//计算item高度的代理方法，将item的size与indexPath传递给外界
- (CGSize)dlzCollectionViewLayout:(DLZWaterFallLayout *)dlzLayout atIndexPath:(NSIndexPath *)indexPath;

@end

@interface DLZWaterFallLayout : UICollectionViewLayout

#pragma mark- 属性
//总共多少列，默认是2
@property (nonatomic, assign) NSInteger columnCount;

//列间距，默认是0
@property (nonatomic, assign) NSInteger columnSpacing;

//行间距，默认是0
@property (nonatomic, assign) NSInteger rowSpacing;

//section与collectionView的间距，默认是（0，0，0，0）
@property (nonatomic, assign) UIEdgeInsets sectionInset;

//代理，用来计算item的高度
@property (nonatomic, weak) id<DLZWaterFallLayoutDelegate> delegate;

//计算item高度的block，将item的高度与indexPath传递给外界
@property (nonatomic, strong) CGSize(^itemSizeBlock)(NSIndexPath *indexPath);


@end
