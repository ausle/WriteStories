//
//  ArticleDetailViewController.h
//  WriteStories
//
//  Created by YouXianMing on 2018/6/25.
//  Copyright © 2018年 Techcode. All rights reserved.
//

#import "FullContentViewController.h"

@interface ArticleDetailViewController : FullContentViewController

@property (nonatomic)         BOOL      canEdit;
@property (nonatomic, strong) NSString *htmlFolder;

@end
