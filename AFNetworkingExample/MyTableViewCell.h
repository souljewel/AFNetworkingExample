//
//  MyTableViewCell.h
//  SongListsTableView
//
//  Created by Pham Thanh on 12/11/15.
//  Copyright © 2015 hdapps. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Post;

@interface MyTableViewCell : UITableViewCell

@property (nonatomic, strong) Post *post;

+ (CGFloat)heightForCellWithPost:(Post *)post;

@end
