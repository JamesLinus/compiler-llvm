@.str = private unnamed_addr constant [3 x i8] c"%d\00", align 1
;#PROGRAM: EXTDEFS#

@.str1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
;#PROGRAM: EXTDEFS#

define i32 @main() #0
;#FUNC: ID ( PARAS )# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

{
;#STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

%ptr_x.line3  = alloca i32 , align 4
;#DECS: VAR# ->> #DEFS: TYPE DECS ; DEFS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

%ptr_i.line4  = alloca i32 , align 4
;#DECS: VAR# ->> #DEFS: TYPE DECS ; DEFS# ->> #DEFS: TYPE DECS ; DEFS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

 %tmp_0 = call i32 (i8*, ...)* @__isoc99_scanf(i8* getelementptr inbounds ([3 x i8]* @.str, i32 0, i32 0), i32* %ptr_x.line3)
;#STMT: read ( EXPS )# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

  %r_1 = load i32* %ptr_x.line3, align 4
;#EXPS: ID ARRS# ->> #STMT: write ( EXPS )# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

%tmp_2 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str1, i32 0, i32 0), i32 %r_1)
;#STMT: write ( EXPS )# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

  %r_4 = load i32* %ptr_i.line4, align 4
;#EXPS: ID ARRS# ->> #=# ->> #EXP: EXPS# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

    store i32 0, i32* %ptr_i.line4, align 4
;#=# ->> #EXP: EXPS# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

br label %label.for.ix1.cond
;#STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

label.for.ix1.cond:
;#STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

  %r_5 = load i32* %ptr_i.line4, align 4
;#EXPS: ID ARRS# ->> #<# ->> #EXP: EXPS# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

  %r_6 = load i32* %ptr_x.line3, align 4
;#EXPS: ID ARRS# ->> #<# ->> #EXP: EXPS# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

%r_7= icmp slt i32 %r_5, %r_6
 ; set retType to i1
;#<# ->> #EXP: EXPS# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

  br i1 %r_7, label %label.for.ix1.body, label %label.for.ix1.end
;#STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

label.for.ix1.body:
;#STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

%ptr_temp.line10  = alloca i32 , align 4
;#DECS: VAR# ->> #DEFS: TYPE DECS ; DEFS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #STMT: STMTBLOCK# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

 %tmp_8 = call i32 (i8*, ...)* @__isoc99_scanf(i8* getelementptr inbounds ([3 x i8]* @.str, i32 0, i32 0), i32* %ptr_temp.line10)
;#STMT: read ( EXPS )# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #STMT: STMTBLOCK# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

  %r_9 = load i32* %ptr_temp.line10, align 4
;#EXPS: ID ARRS# ->> #STMT: write ( EXPS )# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #STMT: STMTBLOCK# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

%tmp_10 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str1, i32 0, i32 0), i32 %r_9)
;#STMT: write ( EXPS )# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #STMT: STMTBLOCK# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

 %r_11 = load i32* %ptr_i.line4, align 4
;#EXPS: UNARYOP EXPS# ->> #EXP: EXPS# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

   %r_12 = add nsw i32 %r_11, 1
;#EXPS: UNARYOP EXPS# ->> #EXP: EXPS# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

   store i32 %r_12, i32* %ptr_i.line4, align 4
;#EXPS: UNARYOP EXPS# ->> #EXP: EXPS# ->> #STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

  br label %label.for.ix1.cond
;#STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

label.for.ix1.end:
;#STMT: for ( EXP ; EXP ; EXP ) STMT# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

ret i32 0
;#STMT: RETURN EXPS ;# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTS: STMT STMTS# ->> #STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#

}
;#STMTBLOCK: { DEFS STMTS }# ->> #EXTDEF: TYPE FUNC STMTBLOCK# ->> #EXTDEFS: EXTDEF EXTDEFS# ->> #PROGRAM: EXTDEFS#


declare i32 @__isoc99_scanf(i8*, ...) #1
;#PROGRAM: EXTDEFS#

declare i32 @printf(i8*, ...) #1
;#PROGRAM: EXTDEFS#

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false""no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
;#PROGRAM: EXTDEFS#

attributes #1 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
;#PROGRAM: EXTDEFS#

