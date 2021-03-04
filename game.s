	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"game.c"
	.text
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	bearWalk.part.2, %function
bearWalk.part.2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r1, .L5
	mov	ip, #0
	ldr	r3, [r1]
	cmp	r3, #24
	moveq	r3, #8
	ldr	r0, .L5+4
	ldr	r2, .L5+8
	str	ip, [r2]
	ldr	r2, [r0, #12]
	addne	r3, r3, #8
	subeq	r2, r2, #9
	subne	r2, r2, #10
	streq	r2, [r0, #12]
	strne	r2, [r0, #12]
	str	r3, [r1]
	bx	lr
.L6:
	.align	2
.L5:
	.word	bRow
	.word	bear
	.word	bTimer
	.size	bearWalk.part.2, .-bearWalk.part.2
	.align	2
	.global	initGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	initGame, %function
initGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, lr}
	mov	r9, #16
	mov	r1, #8
	mov	r8, #99
	mov	r7, #46
	mov	r6, #1
	mov	r5, #105
	mov	lr, #150
	mov	r4, #3
	mov	r3, #0
	mov	ip, #4
	mov	r0, #12
	ldr	r2, .L9
	str	r9, [r2]
	ldr	r2, .L9+4
	str	r8, [r2, #8]
	str	r7, [r2, #12]
	str	r6, [r2, #24]
	str	r1, [r2, #28]
	ldr	r2, .L9+8
	str	r1, [r2]
	ldr	r2, .L9+12
	str	r1, [r2, #28]
	str	r5, [r2, #8]
	str	lr, [r2, #12]
	str	r4, [r2, #24]
	ldr	lr, .L9+16
	ldr	r1, .L9+20
	ldr	r2, .L9+24
	str	r3, [lr]
	str	r3, [r1]
	str	r3, [r2]
	ldr	lr, .L9+28
	ldr	r1, .L9+32
	ldr	r2, .L9+36
	str	r3, [lr]
	str	r3, [r1]
	ldr	lr, .L9+40
	str	r3, [r2]
	ldr	r1, .L9+44
	ldr	r2, .L9+48
	str	r3, [lr]
	str	ip, [r1]
	str	r0, [r2]
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L10:
	.align	2
.L9:
	.word	hOff
	.word	leo
	.word	bRow
	.word	bear
	.word	lRow
	.word	lTimer
	.word	fire
	.word	bTimer
	.word	winner
	.word	loser
	.word	dead
	.word	lCol
	.word	bCol
	.size	initGame, .-initGame
	.align	2
	.global	initLeo
	.syntax unified
	.arm
	.fpu softvfp
	.type	initLeo, %function
initLeo:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	ip, #1
	mov	lr, #99
	mov	r4, #8
	mov	r2, #0
	mov	r0, #4
	ldr	r3, .L13
	ldr	r1, [r3]
	ldr	r3, .L13+4
	add	r1, r1, #30
	str	r1, [r3, #12]
	str	lr, [r3, #8]
	str	ip, [r3, #24]
	ldr	lr, .L13+8
	str	r4, [r3, #28]
	ldr	ip, .L13+12
	ldr	r1, .L13+16
	ldr	r3, .L13+20
	str	r2, [lr]
	str	r2, [ip]
	str	r2, [r1]
	str	r0, [r3]
	pop	{r4, lr}
	bx	lr
.L14:
	.align	2
.L13:
	.word	hOff
	.word	leo
	.word	lRow
	.word	lTimer
	.word	fire
	.word	lCol
	.size	initLeo, .-initLeo
	.align	2
	.global	initBear
	.syntax unified
	.arm
	.fpu softvfp
	.type	initBear, %function
initBear:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	mov	r0, #3
	mov	r4, #105
	mov	lr, #150
	mov	r2, #8
	mov	ip, #12
	mov	r1, #0
	ldr	r3, .L17
	str	r4, [r3, #8]
	str	lr, [r3, #12]
	str	r0, [r3, #24]
	ldr	lr, .L17+4
	ldr	r0, .L17+8
	str	r2, [r3, #28]
	ldr	r3, .L17+12
	str	r2, [lr]
	str	ip, [r0]
	str	r1, [r3]
	pop	{r4, lr}
	bx	lr
.L18:
	.align	2
.L17:
	.word	bear
	.word	bRow
	.word	bCol
	.word	bTimer
	.size	initBear, .-initBear
	.align	2
	.global	drawLeo
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawLeo, %function
drawLeo:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L35
	ldr	ip, [r3]
	ldr	r0, .L35+4
	ldr	r3, .L35+8
	cmp	ip, #0
	ldr	r2, [r3]
	ldr	r3, [r0]
	bne	.L20
	cmp	r2, #16
	ble	.L34
.L21:
	ldr	r1, .L35+12
	ldr	r1, [r1]
	cmp	r1, #0
	bne	.L22
.L23:
	mvn	r3, r3, lsl #17
	mvn	r3, r3, lsr #17
	ldr	r1, .L35+16
	strh	r3, [r1]	@ movhi
.L25:
	ldr	r3, [r0, #4]
	mvn	r3, r3, lsl #18
	mvn	r3, r3, lsr #18
	add	r2, r2, ip, lsl #5
	strh	r3, [r1, #2]	@ movhi
	strh	r2, [r1, #4]	@ movhi
	bx	lr
.L20:
	ldr	r1, .L35+12
	ldr	r1, [r1]
	cmp	r1, #0
	bne	.L22
	cmp	ip, #8
	bne	.L23
	cmp	r2, #20
	bne	.L23
.L22:
	ldr	r1, .L35+20
	ldr	r1, [r1]
	cmp	r1, #0
	bne	.L23
.L24:
	ldr	r1, .L35+16
	strh	r3, [r1]	@ movhi
	b	.L25
.L34:
	ldr	r1, [r0, #24]
	cmp	r1, #5
	beq	.L21
	ldr	r1, .L35+20
	ldr	r1, [r1]
	cmp	r1, #0
	beq	.L24
	b	.L23
.L36:
	.align	2
.L35:
	.word	lRow
	.word	leo
	.word	lCol
	.word	fire
	.word	shadowOAM
	.word	dead
	.size	drawLeo, .-drawLeo
	.align	2
	.global	drawBear
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawBear, %function
drawBear:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r0, .L46
	ldr	r2, [r0, #4]
	mvn	r2, r2, lsl #18
	ldr	r3, .L46+4
	ldr	r1, [r0, #24]
	ldr	r3, [r3]
	mvn	r2, r2, lsr #18
	cmp	r1, #5
	cmpeq	r3, #20
	ldr	r1, .L46+8
	ldr	r1, [r1]
	add	r3, r3, r1, lsl #5
	lsl	r3, r3, #16
	ldr	r1, .L46+12
	asr	r3, r3, #16
	orr	ip, r3, #4096
	strh	r2, [r1, #10]	@ movhi
	orreq	r2, r3, #16384
	strh	ip, [r1, #12]	@ movhi
	strheq	r2, [r1, #12]	@ movhi
	ldr	r2, .L46+16
	ldr	r2, [r2]
	ldr	r0, [r0]
	cmp	r2, #0
	orrne	r3, r3, #12288
	strh	r0, [r1, #8]	@ movhi
	strhne	r3, [r1, #12]	@ movhi
	bx	lr
.L47:
	.align	2
.L46:
	.word	bear
	.word	bCol
	.word	bRow
	.word	shadowOAM
	.word	dead
	.size	drawBear, .-drawBear
	.align	2
	.global	drawHealth
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawHealth, %function
drawHealth:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r2, .L49
	ldr	r3, .L49+4
	ldr	r2, [r2, #28]
	ldr	r3, [r3, #28]
	rsb	r2, r2, #31
	rsb	r3, r3, #31
	lsl	r2, r2, #5
	lsl	r3, r3, #5
	ldr	r1, .L49+8
	ldr	r0, .L49+12
	add	r2, r2, #28
	ldr	ip, .L49+16
	add	r3, r3, #28
	orr	r2, r2, #8192
	orr	r3, r3, #8192
	strh	r2, [r1, #20]	@ movhi
	strh	ip, [r1, #26]	@ movhi
	strh	r3, [r1, #28]	@ movhi
	strh	r0, [r1, #16]	@ movhi
	strh	r0, [r1, #18]	@ movhi
	strh	r0, [r1, #24]	@ movhi
	bx	lr
.L50:
	.align	2
.L49:
	.word	leo
	.word	bear
	.word	shadowOAM
	.word	16394
	.word	16582
	.size	drawHealth, .-drawHealth
	.align	2
	.global	drawGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawGame, %function
drawGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	bl	drawBear
	ldr	r4, .L53
	bl	drawLeo
	bl	drawHealth
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L53+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r1, #67108864
	ldr	r3, .L53+8
	ldr	r2, [r3]
	add	r3, r2, r2, lsr #31
	asr	r3, r3, #1
	lsl	r3, r3, #16
	lsl	r2, r2, #16
	lsr	r3, r3, #16
	lsr	r2, r2, #16
	strh	r2, [r1, #20]	@ movhi
	pop	{r4, lr}
	strh	r3, [r1, #24]	@ movhi
	bx	lr
.L54:
	.align	2
.L53:
	.word	DMANow
	.word	shadowOAM
	.word	hOff
	.size	drawGame, .-drawGame
	.align	2
	.global	drawBlood
	.syntax unified
	.arm
	.fpu softvfp
	.type	drawBlood, %function
drawBlood:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r0, .L61
	ldr	r3, [r0]
	cmp	r3, #9
	str	lr, [sp, #-4]!
	ble	.L60
	ldr	r1, .L61+4
	ldm	r1, {r1, r2}
	add	r2, r2, #45
	cmp	r3, #19
	orr	r2, r2, #16384
	add	r1, r1, #15
	ldr	ip, .L61+8
	ldrle	lr, .L61+12
	ldrgt	lr, .L61+16
	lsl	r2, r2, #16
	lsl	r1, r1, #16
	lsr	r2, r2, #16
	lsr	r1, r1, #16
	add	r3, r3, #1
	strh	lr, [ip, #36]	@ movhi
	strh	r1, [ip, #32]	@ movhi
	strh	r2, [ip, #34]	@ movhi
	str	r3, [r0]
	ldr	lr, [sp], #4
	bx	lr
.L60:
	mov	lr, #10
	ldr	r2, .L61+8
	ldr	ip, .L61+20
	ldr	r1, .L61+12
	add	r3, r3, #1
	strh	lr, [r2, #32]	@ movhi
	strh	ip, [r2, #34]	@ movhi
	strh	r1, [r2, #36]	@ movhi
	str	r3, [r0]
	ldr	lr, [sp], #4
	bx	lr
.L62:
	.align	2
.L61:
	.word	blTimer
	.word	leo
	.word	shadowOAM
	.word	8732
	.word	8222
	.word	16582
	.size	drawBlood, .-drawBlood
	.align	2
	.global	leoBreath
	.syntax unified
	.arm
	.fpu softvfp
	.type	leoBreath, %function
leoBreath:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r1, #0
	ldr	r3, .L68
	ldr	r0, [r3]
	ldr	r2, .L68+4
	cmp	r0, r1
	str	r1, [r2]
	moveq	r2, #8
	streq	r2, [r3]
	ldr	r2, .L68+8
	ldr	r1, [r2]
	cmp	r1, #50
	bxle	lr
	ldr	r1, [r3]
	cmp	r1, #24
	mov	r0, #0
	moveq	r1, #8
	addne	r1, r1, #8
	str	r0, [r2]
	str	r1, [r3]
	bx	lr
.L69:
	.align	2
.L68:
	.word	lRow
	.word	lCol
	.word	lTimer
	.size	leoBreath, .-leoBreath
	.align	2
	.global	leoRun
	.syntax unified
	.arm
	.fpu softvfp
	.type	leoRun, %function
leoRun:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r1, .L81
	ldr	r3, [r1]
	ldr	r2, .L81+4
	cmp	r3, #10
	ldr	r3, [r2]
	ble	.L71
	mov	r0, #0
	cmp	r3, #24
	str	r0, [r1]
	beq	.L72
	add	r3, r3, #8
	str	r3, [r2]
.L71:
	cmp	r3, #0
	bxeq	lr
	ldr	r3, .L81+8
	ldr	r2, [r3]
	cmp	r2, #4
	movne	r2, #8
	strne	r2, [r3]
	bx	lr
.L72:
	ldr	r1, .L81+8
	ldr	r3, [r1]
	cmp	r3, #4
	moveq	r3, #12
	subne	r3, r3, #4
	streq	r0, [r2]
	streq	r3, [r1]
	strne	r3, [r1]
	strne	r0, [r2]
	bx	lr
.L82:
	.align	2
.L81:
	.word	lTimer
	.word	lRow
	.word	lCol
	.size	leoRun, .-leoRun
	.align	2
	.global	bearWalk
	.syntax unified
	.arm
	.fpu softvfp
	.type	bearWalk, %function
bearWalk:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L85
	ldr	r3, [r3]
	cmp	r3, #20
	bxle	lr
	b	bearWalk.part.2
.L86:
	.align	2
.L85:
	.word	bTimer
	.size	bearWalk, .-bearWalk
	.align	2
	.global	leoPunch
	.syntax unified
	.arm
	.fpu softvfp
	.type	leoPunch, %function
leoPunch:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r2, .L106
	ldr	r3, [r2]
	cmp	r3, #8
	beq	.L105
	cmp	r3, #20
	bxle	lr
	push	{r4, lr}
	mov	r4, #0
	str	r4, [r2]
	bl	leoBreath
	mov	r0, #1
	ldr	r1, .L106+4
	ldr	r2, .L106+8
	ldr	ip, [r1, #12]
	ldr	r3, [r2, #12]
	sub	r3, r3, ip
	cmp	r3, #19
	str	r0, [r1, #24]
	bgt	.L91
	ldr	r3, [r2, #24]
	cmp	r3, #5
	beq	.L93
	mov	ip, #24
	mov	r1, #5
	ldr	r3, .L106+12
	ldr	r0, [r3]
	ldr	r3, [r2, #28]
	sub	r3, r3, #1
	cmp	r0, #0
	str	r3, [r2, #28]
	ldr	r0, .L106+16
	ldr	r3, .L106+20
	str	ip, [r0]
	str	r1, [r2, #24]
	str	r4, [r3]
	bne	.L87
	ldr	r3, .L106+24
	ldr	r3, [r3]
	cmp	r3, #0
	bne	.L97
	ldr	r2, .L106+28
	ldr	r1, .L106+32
	ldr	r0, .L106+36
	ldr	r4, .L106+40
	mov	lr, pc
	bx	r4
	b	.L87
.L105:
	ldr	r2, .L106+44
	ldr	r3, [r2]
	add	r3, r3, #4
	str	r3, [r2]
	bx	lr
.L91:
	cmp	r3, #22
	ble	.L93
.L87:
	pop	{r4, lr}
	bx	lr
.L93:
	ldr	r3, .L106+24
	ldr	r3, [r3]
	cmp	r3, #0
	beq	.L87
	mov	lr, #0
	mov	r0, #24
	mov	r1, #5
	ldr	r3, .L106+12
	ldr	ip, [r3]
	ldr	r3, [r2, #28]
	sub	r3, r3, #1
	cmp	ip, lr
	str	r3, [r2, #28]
	ldr	ip, .L106+20
	ldr	r3, .L106+16
	str	lr, [ip]
	str	r0, [r3]
	str	r1, [r2, #24]
	bne	.L87
.L97:
	mov	r3, #0
	ldr	r2, .L106+28
	ldr	r1, .L106+48
	ldr	r0, .L106+52
	ldr	r4, .L106+40
	mov	lr, pc
	bx	r4
	b	.L87
.L107:
	.align	2
.L106:
	.word	lTimer
	.word	leo
	.word	bear
	.word	winner
	.word	bRow
	.word	bTimer
	.word	cheat
	.word	11025
	.word	4120
	.word	punchsound
	.word	playSoundB
	.word	lCol
	.word	5661
	.word	knifesound
	.size	leoPunch, .-leoPunch
	.align	2
	.global	updateLeo
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateLeo, %function
updateLeo:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L139
	ldr	r3, [r3]
	cmp	r3, #0
	push	{r4, r5, r6, lr}
	bne	.L109
	ldr	ip, .L139+4
	ldr	r2, [ip]
	ldr	r3, .L139+8
	cmp	r2, #0
	ldr	r2, [r3]
	bne	.L110
	cmp	r2, #0
	bne	.L109
	ldr	r3, .L139+12
	ldrh	r3, [r3]
	tst	r3, #1
	beq	.L111
	ldr	r3, .L139+16
	ldrh	r3, [r3]
	ands	r6, r3, #1
	beq	.L138
.L111:
	ldr	r3, .L139+20
	ldrh	r2, [r3, #48]
	ldr	r4, .L139+24
	tst	r2, #16
	ldr	r2, [r4, #24]
	bne	.L113
	cmp	r2, #4
	beq	.L114
	ldr	r6, .L139+28
	ldr	r3, [r4, #12]
	ldr	r2, [r6, #12]
	cmp	r3, r2
	addlt	r3, r3, #1
	strlt	r3, [r4, #12]
	ldr	r3, .L139+32
	ldr	r2, [r3]
	cmp	r2, #0
	moveq	r2, #4
	streq	r2, [r3]
	bl	leoRun
	mov	r1, #2
	ldr	r2, .L139+36
	ldr	r3, [r2]
	ldr	r5, .L139+40
	add	r3, r3, #1
	str	r1, [r4, #24]
	str	r3, [r2]
	ldr	r1, [r5]
	ldr	r0, [r4, #12]
	b	.L112
.L109:
	ldr	r5, .L139+40
	ldr	r4, .L139+24
	ldr	r3, .L139+36
	ldr	r1, [r5]
	ldr	r0, [r4, #12]
	ldr	r3, [r3]
.L124:
	ldr	ip, .L139+44
	ldr	r2, [ip]
	add	r2, r2, #1
	cmp	r2, #200
	str	r2, [ip]
	bgt	.L133
.L137:
	ldr	r6, .L139+28
.L112:
	ldr	r2, [r4, #28]
	cmp	r2, #0
	moveq	ip, #1
	ldreq	r2, .L139+48
	streq	ip, [r2]
	ldr	r2, [r6, #28]
	cmp	r2, #0
	bne	.L122
	mov	r6, #1
	ldr	ip, .L139+8
	ldr	lr, .L139+52
	str	r6, [ip]
	ldr	ip, .L139+32
	str	r2, [lr]
	str	r2, [ip]
.L122:
	ldr	r2, [r4, #8]
	add	r1, r1, #1
	sub	r3, r0, r3
	str	r1, [r5]
	stm	r4, {r2, r3}
	pop	{r4, r5, r6, lr}
	bx	lr
.L133:
	mov	ip, #1
	ldr	r2, .L139+56
	ldr	r6, .L139+28
	str	ip, [r2]
	b	.L112
.L110:
	ldr	r5, .L139+40
	ldr	r4, .L139+24
	ldr	lr, .L139+36
	cmp	r2, #0
	ldr	r1, [r5]
	ldr	r0, [r4, #12]
	ldr	r3, [lr]
	bne	.L124
	cmp	r1, #20
	ble	.L137
	mov	r6, #2
	sub	r0, r0, #6
	sub	r3, r3, #4
	str	r0, [r4, #12]
	str	r3, [lr]
	str	r2, [ip]
	str	r6, [r4, #24]
	b	.L137
.L113:
	ldrh	r3, [r3, #48]
	tst	r3, #32
	bne	.L117
	cmp	r2, #4
	beq	.L118
	ldr	r2, .L139+32
	ldr	r3, [r4, #12]
	ldr	r1, [r2]
	sub	r3, r3, #1
	cmp	r1, #0
	str	r3, [r4, #12]
	moveq	r3, #4
	streq	r3, [r2]
	bl	leoRun
	mov	r1, #2
	ldr	r2, .L139+36
	ldr	r3, [r2]
	ldr	r5, .L139+40
	sub	r3, r3, #1
	str	r1, [r4, #24]
	str	r3, [r2]
	ldr	r1, [r5]
	ldr	r0, [r4, #12]
	ldr	r6, .L139+28
	b	.L112
.L117:
	cmp	r2, #4
	beq	.L118
	bl	leoBreath
	mov	r2, #1
	ldr	r5, .L139+40
	ldr	r3, .L139+36
	str	r2, [r4, #24]
	ldr	r1, [r5]
	ldr	r3, [r3]
	ldr	r0, [r4, #12]
	ldr	r6, .L139+28
	b	.L112
.L138:
	ldr	r5, .L139+40
	str	r6, [r5]
	bl	leoPunch
	mov	ip, #20
	mov	r0, #4
	ldr	r3, .L139+32
	ldr	r4, .L139+24
	str	ip, [r3]
	ldr	r2, .L139+52
	ldr	r3, .L139+36
	str	r0, [r4, #24]
	str	r6, [r2]
	ldr	r1, [r5]
	ldr	r0, [r4, #12]
	ldr	r3, [r3]
	ldr	r6, .L139+28
	b	.L112
.L114:
	ldrh	r3, [r3, #48]
.L118:
	bl	leoPunch
	ldr	r5, .L139+40
	ldr	r3, .L139+36
	ldr	r1, [r5]
	ldr	r3, [r3]
	ldr	r0, [r4, #12]
	ldr	r6, .L139+28
	b	.L112
.L140:
	.align	2
.L139:
	.word	fire
	.word	punched
	.word	dead
	.word	oldButtons
	.word	buttons
	.word	67109120
	.word	leo
	.word	bear
	.word	lCol
	.word	hOff
	.word	lTimer
	.word	newTimer
	.word	loser
	.word	lRow
	.word	winner
	.size	updateLeo, .-updateLeo
	.align	2
	.global	bearStand
	.syntax unified
	.arm
	.fpu softvfp
	.type	bearStand, %function
bearStand:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L158
	ldr	r1, .L158+4
	ldr	r0, .L158+8
	ldr	ip, [r3]
	ldr	r2, [r0, #12]
	ldr	r3, [r1, #12]
	cmp	ip, #0
	sub	ip, r3, r2
	push	{r4, r5, r6, lr}
	movne	lr, #45
	moveq	lr, #26
	cmp	ip, #49
	bgt	.L141
	ldr	ip, .L158+12
	ldr	r4, [ip]
	cmp	r4, lr
	ble	.L141
	mov	r6, #0
	ldr	r4, .L158+16
	ldr	lr, [r4]
	ldr	r5, .L158+20
	cmp	lr, #8
	str	r6, [ip]
	ldr	ip, [r5]
	beq	.L155
	cmp	lr, #16
	beq	.L156
	mov	r2, #8
	cmp	ip, #0
	subeq	r3, r3, #1
	str	r2, [r4]
	streq	r3, [r1, #12]
.L141:
	pop	{r4, r5, r6, lr}
	bx	lr
.L155:
	mov	lr, #16
	cmp	ip, r6
	str	lr, [r4]
	bne	.L141
	sub	r3, r3, #9
	str	r3, [r1, #12]
	sub	r2, r3, r2
.L146:
	cmp	r2, #15
	bgt	.L141
	ldr	r3, [r1, #28]
	cmp	r3, #0
	ble	.L141
	mov	r1, #5
	ldr	r3, .L158+24
	ldr	r2, [r0, #28]
	ldr	r3, [r3]
	sub	r2, r2, #1
	cmp	r3, #0
	str	r2, [r0, #28]
	str	r1, [r0, #24]
	beq	.L157
.L148:
	ldr	r2, [r4]
	mov	r3, #1
	cmp	r2, #16
	moveq	r2, #20
	movne	r2, #28
	str	r3, [r5]
	ldr	r3, .L158+28
	mov	r0, #8
	str	r2, [r3]
	mov	r2, #0
	ldr	r1, .L158+32
	ldr	r3, .L158+36
	str	r0, [r1]
	str	r2, [r3]
	b	.L141
.L156:
	mov	lr, #24
	cmp	ip, #0
	str	lr, [r4]
	bne	.L141
	sub	r3, r3, #1
	str	r3, [r1, #12]
	sub	r2, r3, r2
	b	.L146
.L157:
	ldr	r2, .L158+40
	ldr	r1, .L158+44
	ldr	r0, .L158+48
	ldr	r6, .L158+52
	mov	lr, pc
	bx	r6
	b	.L148
.L159:
	.align	2
.L158:
	.word	cheat
	.word	bear
	.word	leo
	.word	bTimer
	.word	bRow
	.word	punched
	.word	winner
	.word	lCol
	.word	lRow
	.word	lTimer
	.word	11025
	.word	4120
	.word	punchsound
	.word	playSoundB
	.size	bearStand, .-bearStand
	.align	2
	.global	updateBear
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateBear, %function
updateBear:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L189
	ldr	r3, [r3]
	push	{r4, r5, r6, r7, r8, lr}
	ldr	r4, .L189+4
	cmp	r3, #0
	ldr	r3, [r4, #24]
	bne	.L161
	cmp	r3, #5
	beq	.L162
	cmp	r3, #3
	ldr	r5, .L189+8
	beq	.L184
.L163:
	ldr	r1, .L189+12
	ldr	r2, [r4, #12]
	ldr	r1, [r1, #12]
	sub	r2, r2, r1
	cmp	r2, #39
	bgt	.L165
	cmp	r3, #0
	bne	.L173
.L166:
	bl	bearStand
	ldr	r1, [r4, #8]
	b	.L168
.L161:
	cmp	r3, #5
	beq	.L162
	mov	r0, #8
	mov	r2, #12
	ldr	r1, .L189+16
	ldr	r3, .L189+20
	str	r0, [r1]
	str	r2, [r3]
	ldr	r1, [r4, #8]
	ldr	r5, .L189+8
.L168:
	ldr	r3, .L189+24
	ldr	r3, [r3]
	cmp	r3, #0
	beq	.L172
	mov	r0, #16
	mov	r2, #20
	ldr	r3, .L189+16
	str	r0, [r3]
	ldr	r3, .L189+20
	str	r2, [r3]
.L172:
	ldr	r3, .L189+28
	ldr	r2, [r4, #12]
	ldr	r0, [r3]
	ldr	r3, [r5]
	sub	r2, r2, r0
	add	r3, r3, #1
	stm	r4, {r1, r2}
	str	r3, [r5]
	pop	{r4, r5, r6, r7, r8, lr}
	bx	lr
.L162:
	ldr	r5, .L189+8
	ldr	r3, .L189+32
	ldr	r2, [r5]
	smull	r6, r7, r2, r3
	asr	r3, r2, #31
	rsb	r3, r3, r7, asr #2
	add	r3, r3, r3, lsl #2
	cmp	r2, r3, lsl #1
	moveq	r3, #12
	mov	r0, #20
	ldr	r1, .L189+20
	str	r0, [r1]
	streq	r3, [r1]
	cmp	r2, #39
	movgt	r3, #0
	strgt	r3, [r4, #24]
	bl	drawBlood
	ldr	r1, [r4, #8]
	b	.L168
.L165:
	cmp	r3, #0
	ldr	r1, [r4, #8]
	bne	.L168
	mov	r6, #3
	add	ip, r1, #16
	mov	r0, r6
	mov	r3, #256
	ldr	r2, .L189+36
	ldr	r1, .L189+40
	ldr	r7, .L189+44
	str	ip, [r4, #8]
	str	r6, [r4, #24]
	mov	lr, pc
	bx	r7
	ldr	r1, .L189+48
	mov	r0, r6
	mov	r3, #16384
	ldr	r2, .L189+52
	mov	lr, pc
	bx	r7
	ldr	r1, [r4, #8]
	b	.L168
.L184:
	ldr	r3, [r5]
	cmp	r3, #20
	bgt	.L187
	ldr	r2, .L189+12
	ldr	r3, [r4, #12]
	ldr	r2, [r2, #12]
	sub	r3, r3, r2
	cmp	r3, #39
	bgt	.L188
.L173:
	mov	r0, #0
	mov	r1, #8
	ldr	r3, .L189+56
	ldr	r2, [r3]
	ldr	r3, [r4, #8]
	cmp	r2, r0
	ldr	r2, .L189+16
	sub	r3, r3, #16
	str	r3, [r4, #8]
	str	r1, [r2]
	str	r0, [r4, #24]
	mov	r3, #256
	ldr	r2, .L189+36
	bne	.L167
	ldr	r1, .L189+60
	mov	r0, #3
	ldr	r6, .L189+44
	mov	lr, pc
	bx	r6
	mov	r3, #16384
	ldr	r2, .L189+52
	ldr	r1, .L189+64
	mov	r0, #3
	mov	lr, pc
	bx	r6
	b	.L166
.L167:
	ldr	r1, .L189+68
	mov	r0, #3
	ldr	r6, .L189+44
	mov	lr, pc
	bx	r6
	mov	r3, #16384
	ldr	r2, .L189+52
	ldr	r1, .L189+72
	mov	r0, #3
	mov	lr, pc
	bx	r6
	b	.L166
.L188:
	ldr	r1, [r4, #8]
	b	.L168
.L187:
	bl	bearWalk.part.2
	ldr	r3, [r4, #24]
	b	.L163
.L190:
	.align	2
.L189:
	.word	fire
	.word	bear
	.word	bTimer
	.word	leo
	.word	bRow
	.word	bCol
	.word	dead
	.word	hOff
	.word	1717986919
	.word	83886592
	.word	spritesheet1Pal
	.word	DMANow
	.word	spritesheet1Tiles
	.word	100728832
	.word	cheat
	.word	spritesheet2Pal
	.word	spritesheet2Tiles
	.word	spritesheet5Pal
	.word	spritesheet5Tiles
	.size	updateBear, .-updateBear
	.align	2
	.global	updateGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	updateGame, %function
updateGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	bl	updateLeo
	pop	{r4, lr}
	b	updateBear
	.size	updateGame, .-updateGame
	.comm	newTimer,4,4
	.comm	blTimer,4,4
	.comm	dead,4,4
	.comm	punched,4,4
	.comm	fire,4,4
	.comm	bCol,4,4
	.comm	bRow,4,4
	.comm	lCol,4,4
	.comm	lRow,4,4
	.comm	bTimer,4,4
	.comm	lTimer,4,4
	.comm	bear,32,4
	.comm	leo,32,4
	.comm	shadowOAM,1024,4
	.comm	hOff,4,4
	.comm	soundB,32,4
	.comm	soundA,32,4
	.comm	cheat,4,4
	.comm	loser,4,4
	.comm	winner,4,4
	.ident	"GCC: (devkitARM release 47) 7.1.0"
