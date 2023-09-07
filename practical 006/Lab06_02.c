#include <stdio.h>

void draw_circle(void) {
    printf("         *     \n");
    printf("      *     *  \n");
    printf("       *   *   \n");
}

void draw_intersect1(void) {
    printf("         /\\         \n");
    printf("        /  \\        \n");
    printf("       /    \\       \n");
    printf("      /      \\      \n");
    printf("     /        \\     \n");
    printf("    /          \\    \n");
    printf("   /            \\   \n");
    printf("  /              \\  \n");
} 

void draw_intersect2(void) {
    printf("        //\\\\      \n");
    printf("       //  \\\\     \n");
    printf("      //    \\\\    \n");
    printf("     //      \\\\   \n");
    printf("    //        \\\\  \n");
}

void draw_intersect3(void) {
    printf("        / \\   \n");
    printf("       /   \\  \n");
}

void draw_intersect_with_lines(void) {
    printf("        /-\\      \n");
    printf("    \\_ /   \\_/  \n");
    printf("      /     \\    \n");
    printf("     /       \\   \n");
}



void draw_base_up1(void) {
    printf("      |-----|  \n");
}

void draw_base_up2(void) {
    printf("   |------------|  \n");
}

void draw_base_down1(void) {
    printf("      |_____|  \n");
}

void draw_base_down2(void) {
    printf("    /_________\\  \n");
}

void draw_base_down3(void) {
    printf(" /________________\\  \n");
}

void draw_base_down4(void) {
    printf("   |____________|    \n");
}

void draw_vertical_lines1(void) {
    printf("   |            |    \n");
    printf("   |            |    \n");
}  

void draw_vertical_lines2(void) {
    printf("      |     |    \n");
}    


void draw_triangle(void) {
    draw_intersect1();
    draw_base_down3();
}

void draw_triangle_with_lines(void) {
    draw_intersect_with_lines();
    draw_base_down2();
}

void draw_rectangle(void) {
    draw_base_up2();
    draw_vertical_lines1();
    draw_vertical_lines1();
    draw_vertical_lines1();
    draw_vertical_lines1();
    draw_base_down4(); 
}
   

void draw_rectangle_with_lines(void) {
    draw_base_up1();
    draw_vertical_lines2();
    printf("    \\_|     |_/  \n");
    draw_vertical_lines2();
    draw_vertical_lines2();
    draw_base_down1();
}

void skip_5_lines(void) {
    for (int i = 0; i < 5; i++) {
        printf("\n");
    }
}

int main(void) {
    printf("\n\n");
    
    /* Draw rocket ship */
    draw_triangle();
    draw_rectangle();
    draw_rectangle();
    draw_rectangle();
    draw_intersect2();
    
    skip_5_lines();

    /* Place female stick figure on the head of male stick figure */
    draw_circle();
    draw_intersect_with_lines();
    draw_base_down2();
    draw_intersect3();
    
    /* Draw male stick figure */
    draw_circle();
    draw_rectangle_with_lines();
    draw_intersect3();
    
    return 0;
}