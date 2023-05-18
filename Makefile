.PHONY: clean All

All:
	@echo "----------Building project:[ A_Gravity_Flip - Debug ]----------"
	@cd "A_Gravity_Flip" && "$(MAKE)" -f  "A_Gravity_Flip.mk"
clean:
	@echo "----------Cleaning project:[ A_Gravity_Flip - Debug ]----------"
	@cd "A_Gravity_Flip" && "$(MAKE)" -f  "A_Gravity_Flip.mk" clean
