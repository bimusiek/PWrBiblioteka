//
//  BookCell.h
//  Pwr
//
//  Created by Wojciech Mandrysz on 12/15/12.
//  Copyright (c) 2012 tetek. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Book.h"
@interface BookCell : UITableViewCell

@property (nonatomic, assign) IBOutlet UILabel *author;
@property (nonatomic, assign) IBOutlet UILabel *title;
@property (nonatomic, assign) IBOutlet UILabel *availability;

@end
