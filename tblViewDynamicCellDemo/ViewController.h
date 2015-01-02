//
//  ViewController.h
//  tableViewCellResize
//
//  Created by C-109 on 02/01/15.
//  Copyright (c) 2015 C109. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tblView;

@end

