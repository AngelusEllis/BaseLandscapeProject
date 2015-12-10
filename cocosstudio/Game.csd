<GameProjectFile>
  <PropertyGroup Type="Scene" Name="Game" ID="0e024d41-4316-4cbb-8b43-64bf408483c5" Version="2.3.2.3" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="Scene" ctype="GameNodeObjectData">
        <Size X="960.0000" Y="640.0000" />
        <Children>
          <AbstractNodeData Name="bg" Visible="False" ActionTag="-1843629797" Tag="16" IconVisible="False" LeftMargin="-75.8176" RightMargin="-4064.1826" TopMargin="28.7807" BottomMargin="11.2193" ctype="SpriteObjectData">
            <Size X="5100.0000" Y="600.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="2474.1824" Y="311.2193" />
            <Scale ScaleX="1.0000" ScaleY="1.3909" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="2.5773" Y="0.4863" />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="background.jpg" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="Particle_1" ActionTag="499146104" Tag="7" IconVisible="True" LeftMargin="1054.0000" RightMargin="-94.0000" TopMargin="271.0000" BottomMargin="369.0000" ctype="ParticleObjectData">
            <Size X="0.0000" Y="0.0000" />
            <AnchorPoint />
            <Position X="1054.0000" Y="369.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="1.0979" Y="0.5766" />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="particle_texture (1).plist" Plist="" />
            <BlendFunc Src="770" Dst="1" />
          </AbstractNodeData>
          <AbstractNodeData Name="PlayerShip" ActionTag="1172907418" Tag="14" RotationSkewX="90.0000" RotationSkewY="90.0000" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="-213.7000" RightMargin="592.7000" TopMargin="-271.0000" BottomMargin="-271.0000" ctype="SpriteObjectData">
            <Size X="581.0000" Y="1182.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="76.8000" Y="320.0000" />
            <Scale ScaleX="0.1200" ScaleY="0.1200" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0800" Y="0.5000" />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="PlayerShip.png" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="fire_button" ActionTag="1208625587" Alpha="178" Tag="13" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="852.8000" RightMargin="27.2000" TopMargin="536.0000" BottomMargin="24.0000" TouchEnable="True" FontSize="36" ButtonText="Fire" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="16" Scale9Height="14" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="80.0000" Y="80.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="892.8000" Y="64.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="0" B="0" />
            <PrePosition X="0.9300" Y="0.1000" />
            <PreSize X="0.0833" Y="0.1250" />
            <TextColor A="255" R="0" G="0" B="0" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" Plist="" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="up_button" ActionTag="-725265826" Alpha="178" Tag="11" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="17.2000" RightMargin="842.8000" TopMargin="14.0000" BottomMargin="526.0000" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="50" Scale9Height="60" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="100.0000" Y="100.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="67.2000" Y="576.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0700" Y="0.9000" />
            <PreSize X="0.1042" Y="0.1563" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Normal" Path="arrowPressed.png" Plist="" />
            <PressedFileData Type="Normal" Path="arrowPressed.png" Plist="" />
            <NormalFileData Type="Normal" Path="arrow.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="down_button" ActionTag="-751318210" Alpha="178" Tag="12" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="17.2000" RightMargin="842.8000" TopMargin="526.0000" BottomMargin="14.0000" TouchEnable="True" FlipY="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="50" Scale9Height="60" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="100.0000" Y="100.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="67.2000" Y="64.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0700" Y="0.1000" />
            <PreSize X="0.1042" Y="0.1563" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Normal" Path="arrowPressed.png" Plist="" />
            <PressedFileData Type="Normal" Path="arrowPressed.png" Plist="" />
            <NormalFileData Type="Normal" Path="arrow.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="HealthBar" ActionTag="-1881748513" Tag="16" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="380.0000" RightMargin="380.0000" TopMargin="44.2000" BottomMargin="581.8000" ProgressInfo="100" ctype="LoadingBarObjectData">
            <Size X="200.0000" Y="14.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="480.0000" Y="588.8000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="24" G="237" B="17" />
            <PrePosition X="0.5000" Y="0.9200" />
            <PreSize X="0.2083" Y="0.0219" />
            <ImageFileData Type="Default" Path="Default/LoadingBarFile.png" Plist="" />
          </AbstractNodeData>
          <AbstractNodeData Name="Health" ActionTag="25219641" Tag="17" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="435.0000" RightMargin="435.0000" TopMargin="14.1000" BottomMargin="602.9000" FontSize="20" LabelText="Health 100%" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
            <Size X="112.0000" Y="23.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="480.0000" Y="614.4000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.5000" Y="0.9600" />
            <PreSize X="0.0000" Y="0.0000" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="Score" ActionTag="-2030108634" Tag="19" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="819.0000" RightMargin="51.0000" TopMargin="14.1000" BottomMargin="602.9000" FontSize="20" LabelText="Score: 0" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
            <Size X="75.0000" Y="23.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="864.0000" Y="614.4000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.9000" Y="0.9600" />
            <PreSize X="0.0000" Y="0.0000" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="gameOverbg" ActionTag="-2059867497" Alpha="217" Tag="13" IconVisible="False" LeftMargin="38.5300" RightMargin="11.4700" TopMargin="-726.4994" BottomMargin="749.4994" ctype="SpriteObjectData">
            <Size X="910.0000" Y="617.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="493.5300" Y="1057.9994" />
            <Scale ScaleX="0.7500" ScaleY="0.7500" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.5141" Y="1.6531" />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="gameOver.png" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="gameOverText" ActionTag="422132156" Alpha="217" Tag="14" IconVisible="False" LeftMargin="457.5359" RightMargin="412.4641" TopMargin="-448.1763" BottomMargin="1065.1763" FontSize="20" LabelText="Text Label" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
            <Size X="90.0000" Y="23.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="502.5359" Y="1076.6763" />
            <Scale ScaleX="2.0000" ScaleY="2.0000" />
            <CColor A="255" R="255" G="255" B="0" />
            <PrePosition X="0.5235" Y="1.6823" />
            <PreSize X="0.0000" Y="0.0000" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="gameOverButton" ActionTag="-16949559" Tag="15" IconVisible="False" LeftMargin="447.3476" RightMargin="402.6524" TopMargin="-371.9780" BottomMargin="975.9780" TouchEnable="True" FontSize="14" ButtonText="Back To Menu" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="16" Scale9Height="14" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="110.0000" Y="36.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="502.3476" Y="993.9780" />
            <Scale ScaleX="1.5000" ScaleY="1.5000" />
            <CColor A="255" R="255" G="255" B="0" />
            <PrePosition X="0.5233" Y="1.5531" />
            <PreSize X="0.1146" Y="0.0562" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" Plist="" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="buttonPause" ActionTag="1503462721" Tag="14" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="826.5001" RightMargin="58.4999" TopMargin="57.3179" BottomMargin="507.6821" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="170" Scale9Height="178" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="75.0000" Y="75.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="864.0001" Y="545.1821" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.9000" Y="0.8518" />
            <PreSize X="0.0781" Y="0.1172" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Normal" Path="pause.png" Plist="" />
            <PressedFileData Type="Normal" Path="pause.png" Plist="" />
            <NormalFileData Type="Normal" Path="pause.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>