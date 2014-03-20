//
//  ViewController.h
//  digest
//
//  Created by William Clark on 3/18/14.
//  Copyright (c) 2014 hindsight. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate,
UINavigationControllerDelegate>{
    UIImagePickerController *picker;
    UIImage *image;
    IBOutlet UIImageView *imageView;
    
}

- (IBAction)TakePhoto;


@end
